/* Copyright 2018 Google Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License. */

#ifndef NSYNC_PLATFORM_NUM_TIME_NSYNC_TIME_INIT_H_
#define NSYNC_PLATFORM_NUM_TIME_NSYNC_TIME_INIT_H_

#define NSYNC_TIME_STATIC_INIT(t,ns) \
	(sizeof (nsync_time) >= 8? \
	 (((nsync_time) (t))*1000*1000*1000) + (nsync_time) (ns) : \
	 ((((nsync_time) (t))*1000) + (nsync_time) (ns / (1000 * 1000))))

#endif /*NSYNC_PLATFORM_NUM_TIME_NSYNC_TIME_INIT_H_*/