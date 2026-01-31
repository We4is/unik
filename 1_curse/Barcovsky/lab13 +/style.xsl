<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="html" encoding="UTF-8" indent="yes"/>
    
    <xsl:template match="/">
        <html>
            <head>
                <title>Ведомость успеваемости</title>
                <style>
                    body {
                        font-family: Arial, sans-serif;
                        margin: 20px;
                        background-color: #f5f5f5;
                    }
                    
                    .table-container {
                        margin: 0 auto;
                        max-width: 1200px;
                        background-color: white;
                        border-radius: 8px;
                        box-shadow: 0 2px 10px rgba(0,0,0,0.1);
                        padding: 20px;
                    }
                    
                    h1 {
                        text-align: center;
                        color: #333;
                        margin-bottom: 30px;
                        padding-bottom: 10px;
                        border-bottom: 2px solid #4CAF50;
                    }
                    
                    table {
                        width: 100%;
                        border-collapse: collapse;
                        margin: 20px 0;
                    }
                    
                    th {
                        background-color: #4CAF50;
                        color: white;
                        padding: 15px;
                        text-align: left;
                        font-weight: bold;
                        border-bottom: 2px solid #388E3C;
                    }
                    
                    td {
                        padding: 12px 15px;
                        border-bottom: 1px solid #ddd;
                    }
                    
                    tr:hover {
                        background-color: #f9f9f9;
                    }
                    
                    .grade-low {
                        background-color: #ffebee;
                        color: #c62828;
                        font-weight: bold;
                        padding: 5px 10px;
                        border-radius: 4px;
                        text-align: center;
                    }
                    
                    .grade-high {
                        background-color: #e8f5e8;
                        color: #2e7d32;
                        font-weight: bold;
                        padding: 5px 10px;
                        border-radius: 4px;
                        text-align: center;
                    }
                    
                    .grade-normal {
                        background-color: #f5f5f5;
                        padding: 5px 10px;
                        border-radius: 4px;
                        text-align: center;
                    }
                    
                    .student-name {
                        font-weight: bold;
                        color: #333;
                    }
                    
                    .subject-name {
                        font-weight: 500;
                        color: #555;
                    }
                    
                    .header-row {
                        background-color: #e8f5e8;
                        font-weight: bold;
                    }
                    
                    .total-row {
                        background-color: #f5f5f5;
                        font-weight: bold;
                        border-top: 2px solid #4CAF50;
                    } 
                </style>
            </head>
            <body>
                <div class="table-container">
                    <h1>Ведомость успеваемости</h1>
                    <xsl:apply-templates select="table"/>
                </div>
            </body>
        </html>
    </xsl:template>
    
    <xsl:template match="table">
        <table>
            <thead>
                <tr class="header-row">
                    <th>ФИО студента</th>
                    <th>Мат. анализ</th>
                    <th>АЛОВС</th>
                    <th>ЛАиАГ</th>
                    <th>ОПИ</th>
                    <th>ОАП</th>
                    <th>Бел яз</th>
                    <th>Англ язык</th>
                    <th>Физ культ</th>
                </tr>
            </thead>
            <tbody>
                <xsl:apply-templates select="student"/>
            </tbody>
        </table>
    </xsl:template>
    
    <xsl:template match="student">
        <tr>
            <td class="student-name">
                <xsl:value-of select="name"/>
            </td>
            <xsl:apply-templates select="matanal"/>
            <xsl:apply-templates select="alovs"/>
            <xsl:apply-templates select="lailag"/>
            <xsl:apply-templates select="opi"/>
            <xsl:apply-templates select="cml"/>
            <xsl:apply-templates select="bel"/>
            <xsl:apply-templates select="oap"/>
            <xsl:apply-templates select="eng"/>
            <xsl:apply-templates select="physc"/>     
        </tr>
    </xsl:template>
    
    <xsl:template match="matanal | alovs | lailag | opi | cml | bel | eng | physc">
        <td>
            <xsl:variable name="grade" select="."/>
            <xsl:choose>
                <xsl:when test="$grade &lt; 4">
                    <span class="grade-low">
                        <xsl:value-of select="$grade"/>
                    </span>
                </xsl:when>
                <xsl:when test="$grade &gt;= 9">
                    <span class="grade-high">
                        <xsl:value-of select="$grade"/>
                    </span>
                </xsl:when>
                <xsl:otherwise>
                    <span class="grade-normal">
                        <xsl:value-of select="$grade"/>
                    </span>
                </xsl:otherwise>
            </xsl:choose>
        </td>
    </xsl:template>
</xsl:stylesheet>