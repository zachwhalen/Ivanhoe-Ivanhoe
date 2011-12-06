class Mycroft < Human #inherits from human
  attr_accessor :members[] #Mycroft is a human, and has human members

  def assimilate(human)
    members.put(human)  #adds the human to the Mycroft
  end

end
