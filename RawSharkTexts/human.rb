class Human

  attr_accessor :mood, :hunger  #There's probly more for Humans than Cats

  def speak(utterance)
    prints utterance
  end

  def listen(speech)
    if(@mood >= .6) #An oversimplification
      understand(speech)
    end #Else, it is ignored
  end

end
