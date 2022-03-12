int dComIfG_play_c::getLayerNo_common_common(const char *stageName, int roomId, int layerOverride)
{
	int chosenLayer = -1;
	bool condition;

	int stageComparison;
	uint uVar2;

	if ((char)layerOverride >= 0) {
		goto stateECheck;
	}

	condition = dKy_darkworld_stage_check(stageName, roomId);

	if (condition == true) {
		chosenLayer = 0xE;
	}
	if (chosenLayer < 0xD) {
		stageComparison = strcmp(stageName, "D_MN11");
		if ((stageComparison == 0) || (stageComparison = strcmp(stageName, "F_SP114"), stageComparison == 0)) {
			condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a749c);
			if (condition == false) {
				condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a73ce);
				if (condition == false) {
					condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a73cc);
					if (condition != false) {
						chosenLayer = 1;
					}
				}
				else {
					chosenLayer = 2;
				}
			}
			else {
				chosenLayer = 3;
			}
		}
		else {
			stageComparison = strcmp(stageName, "F_SP108");
			if (stageComparison == 0) {
				condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x2008);
				if (condition == false) {
					condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x1e08);
					if (condition == false) {
						condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x602);
						if (condition == false) {
							condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x4510);
							if (condition == false) {
								chosenLayer = 1;
							}
						}
						else {
							chosenLayer = 2;
						}
					}
					else {
						chosenLayer = 3;
					}
				}
				else {
					chosenLayer = 5;
				}
			}
			else {
				stageComparison = strcmp(stageName, "R_SP108");
				if (stageComparison == 0) {
					condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72f6);
					if (condition == false) {
						condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x4510);
						if (condition == false) {
							chosenLayer = 1;
						}
					}
					else {
						chosenLayer = 2;
					}
				}
				else {
					stageComparison = strcmp(stageName, "F_SP109");
					if ((stageComparison == 0) || (stageComparison = strcmp(stageName, "F_SP111"), stageComparison == 0)) {
						condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x804);
						if (condition == false) {
							condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x810);
							if (condition == false) {
								condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x1320);
								if (condition == false) {
									condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x701);
									if (condition == false) {
										condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0xa08);
										if (condition == false) {
											condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x608);
											if (condition != false) {
												chosenLayer = 1;
											}
										}
										else {
											chosenLayer = 2;
											dComIfG_get_timelayer(chosenLayer);
										}
									}
									else {
										chosenLayer = 0xc;
									}
								}
								else {
									chosenLayer = 2;
									dComIfG_get_timelayer(chosenLayer);
								}
							}
							else {
								chosenLayer = 4;
							}
						}
						else {
							chosenLayer = 2;
							dComIfG_get_timelayer(chosenLayer);
						}
					}
					else {
						stageComparison = strcmp(stageName, "R_SP109");
						if ((stageComparison == 0) || (stageComparison = strcmp(stageName, "R_SP209"), stageComparison == 0)) {
							stageComparison = strcmp(stageName, "R_SP109");
							if ((stageComparison == 0) &&
								((roomId == 1 &&
								(condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x904), condition != false)))) {
								chosenLayer = 4;
								dComIfG_get_timelayer(chosenLayer);
							}
							else {
								condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a7332);
								if (condition == false) {
									condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72f2);
									if (condition != false) {
										chosenLayer = 1;
									}
								}
								else {
									chosenLayer = 2;
									dComIfG_get_timelayer(chosenLayer);
								}
							}
						}
						else {
							stageComparison = strcmp(stageName, "F_SP110");
							if (stageComparison == 0) {
								condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a7308);
								if (condition != false) {
									chosenLayer = 2;
								}
							}
							else {
								stageComparison = strcmp(stageName, "R_SP110");
								if (stageComparison == 0) {
									condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x2320);
									if (condition == false) {
										condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x2004);
										if (condition == false) {
											condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x2020);
											if (condition == false) {
												condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x701);
												if (condition != false) {
													chosenLayer = 1;
												}
											}
											else {
												chosenLayer = 2;
											}
										}
										else {
											chosenLayer = 4;
										}
									}
									else {
										chosenLayer = 3;
									}
								}
								else {
									stageComparison = strcmp(stageName, "F_SP115");
									if ((((stageComparison == 0) || (stageComparison = strcmp(stageName, "F_SP116"), stageComparison == 0)) ||
										((stageComparison = strcmp(stageName, "R_SP116"), stageComparison == 0 && (roomId == 5)))) ||
										(stageComparison = strcmp(stageName, "R_SP115"), stageComparison == 0)) {
										stageComparison = strcmp(stageName, "F_SP115");
										if ((stageComparison == 0) && (roomId == 0)) {
											condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x3b08);
											if (condition == false) {
												condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x3120);
												if (condition == false) {
													condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x904);
													if (condition != false) {
														chosenLayer = 2;
													}
												}
												else {
													chosenLayer = 1;
												}
											}
											else {
												chosenLayer = 3;
											}
										}
										else {
											stageComparison = strcmp(stageName, "R_SP116");
											if ((stageComparison == 0) &&
												((roomId == 5 &&
												(condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x2020), condition != false
													)))) {
												chosenLayer = 4;
											}
											else {
												condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x1e08);
												if ((condition == false) || (stageComparison = strcmp(stageName, "F_SP116"), stageComparison != 0))
												{
													condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x904);
													if (condition == false) {
														stageComparison = strcmp(stageName, "F_SP116");
														if (((stageComparison == 0) && (roomId == 3)) &&
															(condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a7310),
																condition != false)) {
															chosenLayer = 1;
														}
													}
													else {
														stageComparison = strcmp(stageName, "F_SP115");
														if (((stageComparison == 0) && (roomId == 1)) &&
															(condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0xc01),
																condition == false)) {
															chosenLayer = 9;
														}
														else {
															chosenLayer = 2;
														}
													}
												}
												else {
													if (((roomId == 4) || (roomId == 3)) || (roomId == 1)) {
														chosenLayer = 1;
													}
													else {
														chosenLayer = 0;
													}
												}
											}
										}
									}
									else {
										stageComparison = strcmp(stageName, "F_SP113");
										if (stageComparison == 0) {
											condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x2008);
											if (condition != false) {
												chosenLayer = 2;
											}
										}
										else {
											stageComparison = strcmp(stageName, "F_SP126");
											if (stageComparison == 0) {
												condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a7346);
												if (condition != false) {
													chosenLayer = 1;
												}
											}
											else {
												stageComparison = strcmp(stageName, "F_SP124");
												if ((stageComparison == 0) && (roomId == 0)) {
													chosenLayer = 8;
													condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x4008);
													if (condition != false) {
														chosenLayer = 0;
													}
												}
												else {
													stageComparison = strcmp(stageName, "F_SP112");
													if (stageComparison == 0) {
														condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0xb01);
														if (condition == false) {
															condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x902);
															if (condition != false) {
																chosenLayer = 2;
															}
														}
														else {
															chosenLayer = 1;
														}
													}
													else {
														stageComparison = strcmp(stageName, "F_SP103");
														if (stageComparison == 0) {
															if (roomId == 0) {
																condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72f8);
																if (condition == false) {
																	uVar2 = isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8, 0);
																	if (uVar2 == 0) {
																		condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72e6);
																		if (condition == false) {
																			condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x4510);
																			if (condition == false) {
																				condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x4a40);
																				if (condition == false) {
																					chosenLayer = 6;
																				}
																				else {
																					chosenLayer = 0;
																				}
																			}
																			else {
																				chosenLayer = 7;
																			}
																		}
																		else {
																			chosenLayer = 1;
																		}
																	}
																	else {
																		chosenLayer = 2;
																		dComIfG_get_timelayer(chosenLayer);
																	}
																}
																else {
																	chosenLayer = 4;
																	dComIfG_get_timelayer(chosenLayer);
																}
															}
															else {
																if (roomId == 1) {
																	uVar2 = isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8, 0);
																	if (uVar2 == 0) {
																		condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72e6);
																		if (condition == false) {
																			condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x4510);
																			if (condition == false) {
																				condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x4a40);
																				if (condition == false) {
																					chosenLayer = 3;
																				}
																				else {
																					chosenLayer = 4;
																				}
																			}
																			else {
																				chosenLayer = 0;
																			}
																		}
																		else {
																			chosenLayer = 1;
																		}
																	}
																	else {
																		chosenLayer = 2;
																	}
																}
															}
														}
														else {
															stageComparison = strcmp(stageName, "R_SP01");
															if (stageComparison == 0) {
																if (roomId == 1) {
																	uVar2 = isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8, 0);
																	if (uVar2 != 0) {
																		chosenLayer = 2;
																	}
																}
																else {
																	if (roomId == 2) {
																		condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x780);
																		if (condition == false) {
																			uVar2 = isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8
																				, 0);
																			if (uVar2 == 0) {
																				condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																					DAT_803a72e6);
																				if (condition != false) {
																					chosenLayer = 1;
																				}
																			}
																			else {
																				chosenLayer = 2;
																			}
																		}
																		else {
																			chosenLayer = 3;
																		}
																	}
																	else {
																		if (roomId == 5) {
																			condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x601);
																			if (condition == false) {
																				uVar2 = isDarkClearLV((dSv_player_status_b_c *)
																					&DAT_804061e8, 0);
																				if (uVar2 != 0) {
																					chosenLayer = 2;
																				}
																			}
																			else {
																				chosenLayer = 4;
																			}
																		}
																	}
																}
															}
															else {
																stageComparison = strcmp(stageName, "F_SP104");
																if (stageComparison == 0) {
																	if (roomId == 1) {
																		uVar2 = isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8, 0
																		);
																		if (uVar2 == 0) {
																			condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72e6
																			);
																			if (condition == false) {
																				condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x4510);
																				if (condition == false) {
																					condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x4a20);
																					if (condition == false) {
																						chosenLayer = 1;
																					}
																					else {
																						chosenLayer = 3;
																					}
																				}
																				else {
																					chosenLayer = 0;
																				}
																			}
																			else {
																				chosenLayer = 4;
																			}
																		}
																		else {
																			chosenLayer = 2;
																		}
																	}
																	else {
																		uVar2 = isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8, 0
																		);
																		if (uVar2 == 0) {
																			condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72e6
																			);
																			if (condition != false) {
																				chosenLayer = 4;
																			}
																		}
																		else {
																			chosenLayer = 2;
																		}
																	}
																}
																else {
																	stageComparison = strcmp(stageName, "F_SP00");
																	if (stageComparison == 0) {
																		uVar2 = isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8, 0
																		);
																		if (uVar2 == 0) {
																			condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72e6
																			);
																			if (condition == false) {
																				condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																					DAT_803a73da);
																				if (condition == false) {
																					condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x4510);
																					if (condition == false) {
																						condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x4a40
																						);
																						if (condition == false) {
																							chosenLayer = 0xc;
																						}
																						else {
																							chosenLayer = 0xb;
																						}
																					}
																					else {
																						chosenLayer = 9;
																					}
																				}
																				else {
																					chosenLayer = 10;
																				}
																			}
																			else {
																				chosenLayer = 1;
																			}
																		}
																		else {
																			chosenLayer = 2;
																			dComIfG_get_timelayer(chosenLayer);
																		}
																	}
																	else {
																		stageComparison = strcmp(stageName, "F_SP121");
																		if (stageComparison == 0) {
																			condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x1e08);
																			if (condition == false) {
																				condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0xc01);
																				if (condition == false) {
																					condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																						DAT_803a7310);
																					if (condition == false) {
																						condition = isEventBit((dSv_event_c *)&DAT_80406f98, 0x601)
																							;
																						if (condition != false) {
																							condition = isEventBit((dSv_event_c *)&DAT_80406f98,
																								0x602);
																							if (condition == false) {
																								chosenLayer = 3;
																							}
																							else {
																								chosenLayer = 2;
																							}
																						}
																					}
																					else {
																						chosenLayer = 0;
																					}
																				}
																				else {
																					chosenLayer = 4;
																				}
																			}
																			else {
																				chosenLayer = 6;
																			}
																		}
																		else {
																			stageComparison = strcmp(stageName, "F_SP122");
																			if (stageComparison == 0) {
																				if (roomId == 8) {
																					condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x1e08);
																					if (condition == false) {
																						condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0xc01)
																							;
																						if (condition != false) {
																							chosenLayer = 4;
																						}
																					}
																					else {
																						chosenLayer = 6;
																					}
																				}
																				else {
																					if (roomId == 0x10) {
																						condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x2204
																						);
																						if (condition == false) {
																							condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																								0x2102);
																							if (condition == false) {
																								condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																									0x1e08);
																								if (condition == false) {
																									condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																										0xc01);
																									if (condition != false) {
																										chosenLayer = 4;
																									}
																								}
																								else {
																									chosenLayer = 6;
																								}
																							}
																							else {
																								chosenLayer = 1;
																							}
																						}
																						else {
																							chosenLayer = 6;
																						}
																					}
																					else {
																						if (roomId == 0x11) {
																							condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																								0x1e08);
																							if (condition == false) {
																								condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																									0xc01);
																								if (condition != false) {
																									chosenLayer = 4;
																								}
																							}
																							else {
																								chosenLayer = 0;
																							}
																						}
																					}
																				}
																			}
																			else {
																				stageComparison = strcmp(stageName, "F_SP128");
																				if (stageComparison == 0) {
																					condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x2320);
																					if (condition != false) {
																						chosenLayer = 1;
																					}
																				}
																				else {
																					stageComparison = strcmp(stageName, "R_SP160");
																					if (stageComparison == 0) {
																						if (roomId == 5) {
																							condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																								0x1e08);
																							if (condition == false) {
																								chosenLayer = 1;
																							}
																							else {
																								chosenLayer = 0;
																							}
																						}
																						else {
																							condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																								0x2210);
																							if (condition != false) {
																								chosenLayer = 1;
																							}
																						}
																					}
																					else {
																						stageComparison = strcmp(stageName, "F_SP117");
																						if (stageComparison == 0) {
																							condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																								0x2008);
																							if (condition != false) {
																								chosenLayer = 2;
																							}
																						}
																						else {
																							stageComparison = strcmp(stageName, "F_SP118");
																							if (stageComparison == 0) {
																								condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																									0x2b08);
																								if (condition == false) {
																									condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																										0x2010);
																									if (condition == false) {
																										condition = isEventBit((dSv_event_c *)
																											&DAT_804069b0, 0xb40);
																										if (condition != false) {
																											chosenLayer = 1;
																										}
																									}
																									else {
																										chosenLayer = 2;
																									}
																								}
																								else {
																									chosenLayer = 3;
																								}
																							}
																							else {
																								stageComparison = strcmp(stageName, "D_SB10");
																								if (stageComparison == 0) {
																									condition = isEventBit((dSv_event_c *)&DAT_804069b0,
																										0x4510);
																									if (condition != false) {
																										chosenLayer = 1;
																									}
																								}
																								else {
																									stageComparison = strcmp(stageName, "R_SP107");
																									if (stageComparison == 0) {
																										stageComparison = isTransformLV((dSv_player_status_b_c *
																											)&DAT_804061e8, 3);
																										if (stageComparison != 0) {
																											chosenLayer = 0xd;
																										}
																									}
																									else {
																										stageComparison = strcmp(stageName, "D_MN09");
																										if (stageComparison == 0) {
																											if (((roomId != 0xb) && (roomId != 0xd)) &&
																												(roomId != 0xe)) {
																												chosenLayer = 1;
																											}
																										}
																										else {
																											stageComparison = strcmp(stageName, "F_SP127");
																											if ((stageComparison == 0) ||
																												(stageComparison = strcmp(stageName, "R_SP127"),
																													stageComparison == 0)) {
																												if (DAT_8042dd52 == 3) {
																													chosenLayer = 2;
																												}
																												else {
																													if (DAT_8042dd52 < 3) {
																														if (DAT_8042dd52 == 1) {
																															chosenLayer = 0;
																														}
																														else {
																															if (DAT_8042dd52 != 0) {
																																chosenLayer = 1;
																															}
																														}
																													}
																													else {
																														if (DAT_8042dd52 < 5) {
																															chosenLayer = 3;
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
stateECheck:
	if (chosenLayer == 0xE) {
		condition = isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a730a);
		if ((condition != false) &&
			((((stageComparison = strcmp(stageName, "F_SP112"), stageComparison == 0 ||
			(stageComparison = strcmp(stageName, "F_SP113"), stageComparison == 0)) ||
				((stageComparison = strcmp(stageName, "F_SP115"), stageComparison == 0 ||
				(stageComparison = strcmp(stageName, "F_SP116"), stageComparison == 0)))) ||
					(((stageComparison = strcmp(stageName, "R_SP116"), stageComparison == 0 && (roomId == 5)) ||
				((stageComparison = strcmp(stageName, "R_SP115"), stageComparison == 0 ||
						(((stageComparison = strcmp(stageName, "F_SP121"), stageComparison == 0 ||
					(stageComparison = strcmp(stageName, "F_SP126"), stageComparison == 0)) ||
							(stageComparison = strcmp(stageName, "F_SP122"), stageComparison == 0)))))))))) {
			stageComparison = strcmp(stageName, "F_SP121");
			if (stageComparison == 0) {
				if ((8 < roomId) && (roomId < 0xf)) {
					chosenLayer = 0xD;
				}
			}
			else {
				chosenLayer = 0xD;
			}
		}
		stageComparison = strcmp(stageName, "R_SP107");
		if ((stageComparison == 0) && (roomId == 0)) {
			condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x4d08);
			if (condition == false) {
				chosenLayer = 0xb;
			}
		}
		else {
			stageComparison = strcmp(stageName, "D_MN08A");
			if ((stageComparison == 0) && (roomId == 10)) {
				condition = isEventBit((dSv_event_c *)&DAT_804069b0, 0x5410);
				if (condition == false) {
					chosenLayer = 0;
				}
				else {
					chosenLayer = 1;
				}
			}
		}
	}

	return chosenLayer;
}
