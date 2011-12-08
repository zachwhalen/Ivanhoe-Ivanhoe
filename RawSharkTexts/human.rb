class Human

  attr_accessor :mood, :hunger  #There's probly more for Humans than Cats, add attributes
  encoder = Encoder.new

  def speak(utterance)
    prints utterance
  end

  def listen(speech)
    if(@mood >= .6) #An oversimplification
      understand(speech)
    end #Else, it is ignored
  end

  def forget
    mood=nil
    hunger=nil
  end

  def feedTo(fish)
    fish.setPrey(self)
  end

end
