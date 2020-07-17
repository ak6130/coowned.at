<?php 
foreach ($page->Images_Carousel as $slider):
?>
    <div class="carousel-item active">
      <img src="<?php echo $slider->url; ?>" class="d-block w-100" alt="Foto">
    </div>

<?php 
endforeach;
?>
