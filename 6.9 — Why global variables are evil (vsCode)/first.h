    /*------------------------------------------
    Protecting yourself from global destruction
    ------------------------------------------*/

    /*
    First, prefix all non-namespaced global variables with “g” or “g_”, or better yet, 
    put them in a namespace (discussed in lesson 6.2 -- User-defined namespaces), to reduce 
    the chance of naming collisions.
    */
namespace constants
{
    constexpr double gravity { 9.8 };
}