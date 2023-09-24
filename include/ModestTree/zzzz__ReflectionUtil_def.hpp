#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
class Array;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Type;
}
namespace System::Collections {
class IList;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class Action_5;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class Action_6;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace ModestTree {
class ReflectionUtil;
}
// Type: ModestTree::ReflectionUtil
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10566))
// CS Name: ModestTree.ReflectionUtil
class CORDL_TYPE ReflectionUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ReflectionUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtil", modifiers: " const&", def_value: None }]
constexpr ReflectionUtil(ReflectionUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtil", modifiers: "&&", def_value: None }]
constexpr ReflectionUtil(ReflectionUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReflectionUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionUtil& operator=(ReflectionUtil&& o) noexcept = default;
  constexpr ReflectionUtil& operator=(ReflectionUtil const& o) noexcept = default;
                


// Methods

/// @brief Method CreateArray addr 0x2d45094 size 0x308 virtual false final false
static System::Array CreateArray(System::Type elementType, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> instances) ;

/// @brief Method CreateGenericList addr 0x2d4539c size 0x458 virtual false final false
static System::Collections::IList CreateGenericList(System::Type elementType, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> instances) ;

/// @brief Method ToDebugString addr 0x2d457f4 size 0x130 virtual false final false
static ::StringW ToDebugString(System::Reflection::MethodInfo method) ;

/// @brief Method ToDebugString addr 0x2d45924 size 0x1c virtual false final false
static ::StringW ToDebugString(System::Action action) ;

/// @brief Method ToDebugString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1>
static ::StringW ToDebugString(System::Action_1<TParam1> action) ;

/// @brief Method ToDebugString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2>
static ::StringW ToDebugString(System::Action_2<TParam1,TParam2> action) ;

/// @brief Method ToDebugString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3>
static ::StringW ToDebugString(System::Action_3<TParam1,TParam2,TParam3> action) ;

/// @brief Method ToDebugString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4>
static ::StringW ToDebugString(System::Action_4<TParam1,TParam2,TParam3,TParam4> action) ;

/// @brief Method ToDebugString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5>
static ::StringW ToDebugString(System::Action_5<TParam1,TParam2,TParam3,TParam4,TParam5> action) ;

/// @brief Method ToDebugString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6>
static ::StringW ToDebugString(System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> action) ;

/// @brief Method ToDebugString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1>
static ::StringW ToDebugString(System::Func_1<TParam1> func) ;

/// @brief Method ToDebugString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2>
static ::StringW ToDebugString(System::Func_2<TParam1,TParam2> func) ;

/// @brief Method ToDebugString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3>
static ::StringW ToDebugString(System::Func_3<TParam1,TParam2,TParam3> func) ;

/// @brief Method ToDebugString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4>
static ::StringW ToDebugString(System::Func_4<TParam1,TParam2,TParam3,TParam4> func) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
NEED_NO_BOX(ModestTree::ReflectionUtil);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::ReflectionUtil, "ModestTree", "ReflectionUtil");
