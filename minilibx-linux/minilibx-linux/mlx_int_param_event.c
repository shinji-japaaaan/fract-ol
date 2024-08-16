/*
** mlx_int_pm_event.c for MinilibX in 
** 
** Made by Charlie Root
** Login   <ol@epitech.net>
** 
** Started on  Mon Jul 31 16:37:50 2000 Charlie Root
** Last update Wed Oct  6 13:14:52 2004 Olivier Crouzet
*/

#include	"mlx_int.h"

int	mlx_int_pm_undef()
{
}

int	mlx_int_pm_KeyPress(t_xvar *xvar, XEvent *ev, t_win_list *win)
{
  win->hooks[KeyPress].hook(XkbKeycodeToKeysym(xvar->display,
					       ev->xkey.keycode, 0, 0),
			    win->hooks[KeyPress].pm);
}

int	mlx_int_pm_KeyRelease(t_xvar *xvar, XEvent *ev, t_win_list *win)
{
  win->hooks[KeyRelease].hook(XkbKeycodeToKeysym(xvar->display,
						 ev->xkey.keycode, 0, 0),
			      win->hooks[KeyRelease].pm);
}

int	mlx_int_pm_ButtonPress(t_xvar *xvar, XEvent *ev, t_win_list *win)
{
  win->hooks[ButtonPress].hook(ev->xbutton.button,ev->xbutton.x,ev->xbutton.y,
			       win->hooks[ButtonPress].pm);
}

int	mlx_int_pm_ButtonRelease(t_xvar *xvar, XEvent *ev, t_win_list *win)
{
  win->hooks[ButtonRelease].hook(ev->xbutton.button,
				 ev->xbutton.x, ev->xbutton.y,
				 win->hooks[ButtonRelease].pm);
}

int	mlx_int_pm_MotionNotify(t_xvar *xvar, XEvent *ev, t_win_list *win)
{
  win->hooks[MotionNotify].hook(ev->xbutton.x,ev->xbutton.y,
				win->hooks[MotionNotify].pm);
}

int	mlx_int_pm_Expose(t_xvar *xvar, XEvent *ev, t_win_list *win)
{
  if (!ev->xexpose.count)
    win->hooks[Expose].hook(win->hooks[Expose].pm);
}


int	mlx_int_pm_generic(t_xvar *xvar, XEvent *ev, t_win_list *win)
{
  win->hooks[ev->type].hook(win->hooks[ev->type].pm);
}

int	(*(mlx_int_pm_event[]))() =
{
  mlx_int_pm_undef,   /* 0 */
  mlx_int_pm_undef,
  mlx_int_pm_KeyPress,
  mlx_int_pm_KeyRelease,  /* 3 */
  mlx_int_pm_ButtonPress,
  mlx_int_pm_ButtonRelease,
  mlx_int_pm_MotionNotify,  /* 6 */
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_Expose,   /* 12 */
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic,
  mlx_int_pm_generic
};
