class Encoder

  attr_accessor :text, :code, :encoded
  @code = Hash.new([' ', [' '],
          ['s', ['w', 'q', 'a', 'z', 'x', 'c', 'd', 'e']],
          ['d', ['e', 'w', 's', 'x', 'c', 'v', 'f', 'r']],
          ['f', ['r', 'e', 'd', 'c', 'v', 'b', 'g', 't']],
          ['g', ['t', 'r', 'f', 'v', 'b', 'n', 'h', 'y']],
          ['h', ['y', 't', 'g', 'b', 'n', 'm', 'j', 'u']],
          ['j', ['u', 'y', 'h', 'n', 'm', 'z', 'k', 'i']],
          ['k', ['i', 'u', 'j', 'm', 'z', 'a', 'l', 'o']],
          ['l', ['o', 'i', 'k', 'z', 'x', 'a', 'q', 'p']],
          ['x', ['s', 'a', 'z', 'q', 'w', 'e', 'c', 'd']],
          ['c', ['d', 's', 'x', 'w', 'e', 'r', 'v', 'f']],
          ['v', ['f', 'd', 'c', 'e', 'r', 't', 'b', 'g']],
          ['b', ['g', 'f', 'v', 'r', 't', 'y', 'n', 'h']]])

  def new(text)
    @text=text
  end

  def read
    File.foreach(@text) do |s|
      @text << parse(s)
    end
  end

  def parse(string)
    randNum = rand(8)

    if (@code.key?(string))
      @final += @code.to_a[randNum]  
    end
  end

end
