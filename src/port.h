#pragma once

uint32_t homekit_random();
void homekit_random_fill(uint8_t *data, size_t size);

void homekit_system_restart();

#ifdef ESP_IDF
#define spiflash_read spi_flash_read
#define spiflash_write spi_flash_write
#define spiflash_erase_sector spi_flash_erase_sector
#define SPI_FLASH_SECTOR_SIZE SPI_FLASH_SEC_SIZE
#endif
