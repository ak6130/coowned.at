<?php 
foreach ($page->images as $slider):
?>
    <div class="carousel-item active">
      <img src="<?php echo $slider->url; ?>" class="d-block w-100" alt="Foto">
    </div>

<?php 
endforeach;
?>

<?php echo $slider->url; ?>