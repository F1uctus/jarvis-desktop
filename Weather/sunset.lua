function Update()
	m_parent = SKIN:GetMeasure('WeatherParent')
	content  = m_parent:GetStringValue()

	hour, min, meridiem = content:match("<suns>(%d+):(%d+)%s+(%a+)</suns>")

	if (string.upper(meridiem) == 'PM') then
		hour = hour + 12
	end

	return hour .. ":" .. min
end