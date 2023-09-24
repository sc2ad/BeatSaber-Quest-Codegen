#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IAnimatorIkHandler;
}
// Forward declare root types
namespace Zenject {
class AnimatorIkHandlerManager;
}
// Type: Zenject::AnimatorIkHandlerManager
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11242))
// CS Name: Zenject.AnimatorIkHandlerManager
class CORDL_TYPE AnimatorIkHandlerManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AnimatorIkHandlerManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorIkHandlerManager", modifiers: " const&", def_value: None }]
constexpr AnimatorIkHandlerManager(AnimatorIkHandlerManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorIkHandlerManager", modifiers: "&&", def_value: None }]
constexpr AnimatorIkHandlerManager(AnimatorIkHandlerManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimatorIkHandlerManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AnimatorIkHandlerManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimatorIkHandlerManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimatorIkHandlerManager& operator=(AnimatorIkHandlerManager&& o) noexcept = default;
  constexpr AnimatorIkHandlerManager& operator=(AnimatorIkHandlerManager const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Zenject::IAnimatorIkHandler> __declspec(property(get=__get__handlers, put=__set__handlers))  _handlers;

constexpr void __set__handlers(System::Collections::Generic::List_1<Zenject::IAnimatorIkHandler> value) ;

constexpr System::Collections::Generic::List_1<Zenject::IAnimatorIkHandler> __get__handlers() const;


// Methods

/// @brief Method Construct addr 0x2d94b78 size 0x8 virtual false final false
 void Construct(System::Collections::Generic::List_1<Zenject::IAnimatorIkHandler> handlers) ;

/// @brief Method OnAnimatorIk addr 0x2d94b80 size 0x1b0 virtual false final false
 void OnAnimatorIk() ;

static Zenject::AnimatorIkHandlerManager New_ctor() ;

/// @brief Method .ctor addr 0x2d94d30 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenInjectMethod0 addr 0x2d94d38 size 0xdc virtual false final false
static void __zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d94e14 size 0x2f8 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::AnimatorIkHandlerManager);
DEFINE_IL2CPP_ARG_TYPE(Zenject::AnimatorIkHandlerManager, "Zenject", "AnimatorIkHandlerManager");
