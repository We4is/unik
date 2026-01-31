<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="html" encoding="UTF-8" indent="yes"/>
    
    <xsl:template match="/">
        <html>
            <head>
                <title>
                    <xsl:value-of select="store/title"/>
                </title>
                <style>
                    .store-table {
                        display: table;
                        width: 80%;
                        margin: 20px auto;
                        border-collapse: collapse;
                        font-family: Arial, sans-serif;
                        background-color: #f9f9f9;
                    }
                    
                    .store-title {
                        display: table-caption;
                        font-size: 24px;
                        font-weight: bold;
                        text-align: center;
                        margin: 20px 0;
                        color: #333;
                    }
                    
                    .product-row {
                        display: table-row;
                        border-bottom: 1px solid #ddd;
                    }
                    
                    .product-row:hover {
                        background-color: #f0f0f0;
                    }
                    
                    .product-cell {
                        display: table-cell;
                        padding: 12px 15px;
                        text-align: left;
                        border-right: 1px solid #ddd;
                    }
                    
                    .header-row {
                        font-weight: bold;
                        background-color: #4CAF50;
                        color: white;
                    }
                    
                    .header-cell {
                        background-color: #4CAF50;
                        color: white;
                        font-weight: bold;
                    }
                    
                    .product-row:nth-child(even) {
                        background-color: #f2f2f2;
                    }
                    
                    .ptitle-cell {
                        font-weight: bold;
                        color: #333;
                    }
                    
                    .price-cell {
                        color: #e74c3c;
                        font-weight: bold;
                    }
                    
                    .year-cell {
                        color: #7f8c8d;
                    }
                    
                    .product-cell:last-child {
                        border-right: none;
                    }
                </style>
            </head>
            <body>
                <div class="store-title">
                    <xsl:value-of select="store/title"/>
                </div>
                
                <div class="store-table">
                    <div class="product-row header-row">
                        <div class="product-cell header-cell">Название товара</div>
                        <div class="product-cell header-cell">Цена</div>
                        <div class="product-cell header-cell">Год</div>
                    </div>
                    
                    <xsl:apply-templates select="store/product">
                        <xsl:sort select="price" data-type="number" order="ascending"/>
                    </xsl:apply-templates>
                </div>
            </body>
        </html>
    </xsl:template>
    
    <xsl:template match="product">
        <div class="product-row">
            <div class="product-cell ptitle-cell">
                <xsl:value-of select="ptitle"/>
            </div>
            <div class="product-cell price-cell">
                <xsl:value-of select="format-number(price, '#,##0')"/>
            </div>
            <div class="product-cell year-cell">
                <xsl:value-of select="year"/>
            </div>
        </div>
    </xsl:template>
</xsl:stylesheet>