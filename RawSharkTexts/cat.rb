class Cat #I'm not a cat person, someone else could elaborate the cat's moods if necessary

  attr_accessor :hunger, :mood #Add more attributes

  def pet #I find cat's fickle. 
    tmp = rand(3)
    if(tmp=0) do  #1/3 of the time petting improves their mood
      @mood=@mood+.5
    end
    if(tmp=1) do  #1/3 of the time it doesnt't
      @mood=@mood-.5
    end
    #And the last third they just ignore you
  end

  def feed 
    @hunger=@hunger-1;
    @mood=@mood+1;
  end

end
