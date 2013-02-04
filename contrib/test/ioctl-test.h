/* This file is auto-generated by make sync-with-kernel */
#include "linux/videodev2.h"

#include "ioctl_32.h"
#include "ioctl_64.h"

union v4l_parms {
	int		i;
	unsigned long	ulong;
	u_int32_t	u32;
	v4l2_std_id	id;
	enum v4l2_priority prio;

	/* V4L2 structs */
	struct v4l2_decoder_cmd		p_v4l2_decoder_cmd;
	struct v4l2_event_subscription	p_v4l2_event_subscription;
	struct v4l2_dbg_chip_ident	p_v4l2_dbg_chip_ident;
	struct v4l2_tuner		p_v4l2_tuner;
	struct v4l2_capability		p_v4l2_capability;
	struct v4l2_input		p_v4l2_input;
	struct v4l2_exportbuffer	p_v4l2_exportbuffer;
	struct v4l2_sliced_vbi_cap	p_v4l2_sliced_vbi_cap;
	struct v4l2_control		p_v4l2_control;
	struct v4l2_frmsizeenum		p_v4l2_frmsizeenum;
	struct v4l2_streamparm		p_v4l2_streamparm;
	struct v4l2_jpegcompression	p_v4l2_jpegcompression;
	struct v4l2_audioout		p_v4l2_audioout;
	struct v4l2_requestbuffers	p_v4l2_requestbuffers;
	struct v4l2_dv_preset		p_v4l2_dv_preset;
	struct v4l2_audio		p_v4l2_audio;
	struct v4l2_output		p_v4l2_output;
	struct v4l2_fmtdesc		p_v4l2_fmtdesc;
	struct v4l2_crop		p_v4l2_crop;
	struct v4l2_dv_enum_preset	p_v4l2_dv_enum_preset;
	struct v4l2_dv_timings_cap	p_v4l2_dv_timings_cap;
	struct v4l2_dbg_register	p_v4l2_dbg_register;
	struct v4l2_event		p_v4l2_event;
	struct v4l2_queryctrl		p_v4l2_queryctrl;
	struct v4l2_create_buffers	p_v4l2_create_buffers;
	struct v4l2_modulator		p_v4l2_modulator;
	struct v4l2_frmivalenum		p_v4l2_frmivalenum;
	struct v4l2_ext_controls	p_v4l2_ext_controls;
	struct v4l2_buffer		p_v4l2_buffer;
	struct v4l2_format		p_v4l2_format;
	struct v4l2_enum_dv_timings	p_v4l2_enum_dv_timings;
	struct v4l2_dv_timings		p_v4l2_dv_timings;
	struct v4l2_frequency		p_v4l2_frequency;
	struct v4l2_querymenu		p_v4l2_querymenu;
	struct v4l2_enc_idx		p_v4l2_enc_idx;
	struct v4l2_cropcap		p_v4l2_cropcap;
	struct v4l2_encoder_cmd		p_v4l2_encoder_cmd;
	struct v4l2_selection		p_v4l2_selection;
	struct v4l2_hw_freq_seek	p_v4l2_hw_freq_seek;
	struct v4l2_frequency_band	p_v4l2_frequency_band;
	struct v4l2_standard		p_v4l2_standard;
	struct v4l2_framebuffer		p_v4l2_framebuffer;
};
#define ioc(cmd) { CMD32_##cmd, CMD64_##cmd, cmd, #cmd }

/* All defined ioctls */
static const struct {
	u_int32_t cmd32;	/* The 32-bit ioctl value, should never change */
	u_int32_t cmd64;	/* The 64-bit ioctl value, should never change */
	u_int32_t cmd;
	const char *name;
} ioctls[] = {
	/* V4L2 ioctls */
	ioc(VIDIOC_G_OUTPUT),		/* int */
	ioc(VIDIOC_STREAMON),		/* int */
	ioc(VIDIOC_RESERVED),		/* void */
	ioc(VIDIOC_QUERYCAP),		/* struct v4l2_capability */
	ioc(VIDIOC_S_TUNER),		/* struct v4l2_tuner */
	ioc(VIDIOC_G_FREQUENCY),	/* struct v4l2_frequency */
	ioc(VIDIOC_S_DV_TIMINGS),	/* struct v4l2_dv_timings */
	ioc(VIDIOC_ENUM_DV_PRESETS),	/* struct v4l2_dv_enum_preset */
	ioc(VIDIOC_S_PRIORITY),		/* __u32 */
	ioc(VIDIOC_G_PRIORITY),		/* __u32 */
	ioc(VIDIOC_S_AUDIO),		/* struct v4l2_audio */
	ioc(VIDIOC_S_INPUT),		/* int */
	ioc(VIDIOC_QUERYCTRL),		/* struct v4l2_queryctrl */
	ioc(VIDIOC_QUERYMENU),		/* struct v4l2_querymenu */
	ioc(VIDIOC_DV_TIMINGS_CAP),	/* struct v4l2_dv_timings_cap */
	ioc(VIDIOC_S_JPEGCOMP),		/* struct v4l2_jpegcompression */
	ioc(VIDIOC_S_OUTPUT),		/* int */
	ioc(VIDIOC_ENUMAUDOUT),		/* struct v4l2_audioout */
	ioc(VIDIOC_S_FREQUENCY),	/* struct v4l2_frequency */
	ioc(VIDIOC_ENUM_FREQ_BANDS),	/* struct v4l2_frequency_band */
	ioc(VIDIOC_ENCODER_CMD),	/* struct v4l2_encoder_cmd */
	ioc(VIDIOC_QBUF),		/* struct v4l2_buffer */
	ioc(VIDIOC_S_MODULATOR),	/* struct v4l2_modulator */
	ioc(VIDIOC_G_FBUF),		/* struct v4l2_framebuffer */
	ioc(VIDIOC_G_AUDIO),		/* struct v4l2_audio */
	ioc(VIDIOC_S_CROP),		/* struct v4l2_crop */
	ioc(VIDIOC_CROPCAP),		/* struct v4l2_cropcap */
	ioc(VIDIOC_REQBUFS),		/* struct v4l2_requestbuffers */
	ioc(VIDIOC_G_CROP),		/* struct v4l2_crop */
	ioc(VIDIOC_S_DV_PRESET),	/* struct v4l2_dv_preset */
	ioc(VIDIOC_G_SLICED_VBI_CAP),	/* struct v4l2_sliced_vbi_cap */
	ioc(VIDIOC_G_ENC_INDEX),	/* struct v4l2_enc_idx */
	ioc(VIDIOC_STREAMOFF),		/* int */
	ioc(VIDIOC_DQEVENT),		/* struct v4l2_event */
	ioc(VIDIOC_SUBSCRIBE_EVENT),	/* struct v4l2_event_subscription */
	ioc(VIDIOC_S_HW_FREQ_SEEK),	/* struct v4l2_hw_freq_seek */
	ioc(VIDIOC_S_AUDOUT),		/* struct v4l2_audioout */
	ioc(VIDIOC_G_DV_PRESET),	/* struct v4l2_dv_preset */
	ioc(VIDIOC_QUERY_DV_TIMINGS),	/* struct v4l2_dv_timings */
	ioc(VIDIOC_QUERY_DV_PRESET),	/* struct v4l2_dv_preset */
	ioc(VIDIOC_G_TUNER),		/* struct v4l2_tuner */
	ioc(VIDIOC_DBG_S_REGISTER),	/* struct v4l2_dbg_register */
	ioc(VIDIOC_G_SELECTION),	/* struct v4l2_selection */
	ioc(VIDIOC_G_STD),		/* v4l2_std_id */
	ioc(VIDIOC_S_CTRL),		/* struct v4l2_control */
	ioc(VIDIOC_DBG_G_CHIP_IDENT),	/* struct v4l2_dbg_chip_ident */
	ioc(VIDIOC_TRY_FMT),		/* struct v4l2_format */
	ioc(VIDIOC_DBG_G_REGISTER),	/* struct v4l2_dbg_register */
	ioc(VIDIOC_G_DV_TIMINGS),	/* struct v4l2_dv_timings */
	ioc(VIDIOC_G_PARM),		/* struct v4l2_streamparm */
	ioc(VIDIOC_S_FBUF),		/* struct v4l2_framebuffer */
	ioc(VIDIOC_TRY_ENCODER_CMD),	/* struct v4l2_encoder_cmd */
	ioc(VIDIOC_CREATE_BUFS),	/* struct v4l2_create_buffers */
	ioc(VIDIOC_ENUM_FRAMEINTERVALS),/* struct v4l2_frmivalenum */
	ioc(VIDIOC_G_CTRL),		/* struct v4l2_control */
	ioc(VIDIOC_S_EXT_CTRLS),	/* struct v4l2_ext_controls */
	ioc(VIDIOC_DQBUF),		/* struct v4l2_buffer */
	ioc(VIDIOC_DECODER_CMD),	/* struct v4l2_decoder_cmd */
	ioc(VIDIOC_S_SELECTION),	/* struct v4l2_selection */
	ioc(VIDIOC_QUERYBUF),		/* struct v4l2_buffer */
	ioc(VIDIOC_G_EXT_CTRLS),	/* struct v4l2_ext_controls */
	ioc(VIDIOC_G_AUDOUT),		/* struct v4l2_audioout */
	ioc(VIDIOC_ENUMINPUT),		/* struct v4l2_input */
	ioc(VIDIOC_EXPBUF),		/* struct v4l2_exportbuffer */
	ioc(VIDIOC_S_PARM),		/* struct v4l2_streamparm */
	ioc(VIDIOC_ENUMOUTPUT),		/* struct v4l2_output */
	ioc(VIDIOC_PREPARE_BUF),	/* struct v4l2_buffer */
	ioc(VIDIOC_UNSUBSCRIBE_EVENT),	/* struct v4l2_event_subscription */
	ioc(VIDIOC_ENUMSTD),		/* struct v4l2_standard */
	ioc(VIDIOC_G_FMT),		/* struct v4l2_format */
	ioc(VIDIOC_LOG_STATUS),		/* void */
	ioc(VIDIOC_S_STD),		/* v4l2_std_id */
	ioc(VIDIOC_ENUM_FMT),		/* struct v4l2_fmtdesc */
	ioc(VIDIOC_ENUM_DV_TIMINGS),	/* struct v4l2_enum_dv_timings */
	ioc(VIDIOC_ENUMAUDIO),		/* struct v4l2_audio */
	ioc(VIDIOC_TRY_EXT_CTRLS),	/* struct v4l2_ext_controls */
	ioc(VIDIOC_G_JPEGCOMP),		/* struct v4l2_jpegcompression */
	ioc(VIDIOC_OVERLAY),		/* int */
	ioc(VIDIOC_S_FMT),		/* struct v4l2_format */
	ioc(VIDIOC_ENUM_FRAMESIZES),	/* struct v4l2_frmsizeenum */
	ioc(VIDIOC_G_MODULATOR),	/* struct v4l2_modulator */
	ioc(VIDIOC_TRY_DECODER_CMD),	/* struct v4l2_decoder_cmd */
	ioc(VIDIOC_G_INPUT),		/* int */
	ioc(VIDIOC_QUERYSTD),		/* v4l2_std_id */
};
#define S_IOCTLS sizeof(ioctls)/sizeof(ioctls[0])