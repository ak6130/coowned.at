<?php 
foreach ($page->images as $slider):
?>
    <div class="carousel-item active">
      <img src="<?=$slider->url?>" class="d-block w-100" alt="Foto">
    </div>

<?php 
endforeach;
?>