class Encoder

  attr_accessor :text, :code
  @code = [[s, [w, q, a, z, x, c, d, e]],
          [d, [e, w, s, x, c, v, f, r]],
          [f, [r, e, d, c, v, b, g, t]],
          [g, [t, r, f, v, b, n, h, y]],
          [h, [y, t, g, b, n, m, j, u]],
          [j, [u, y, h, n, m, z, k, i]],
          [k, [i, u, j, m, z, l, o, 


  def read(text)
    File.foreach(text) do |s|
    @text << parse(s)
  end

  def parse(string)

  end

end

puts "Please enter the filename of a textfile to encode"
