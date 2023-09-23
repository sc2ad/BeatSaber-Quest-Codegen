#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IAnimatorMoveHandler;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class AnimatorMoveHandlerManager;
}
// Type: Zenject::AnimatorMoveHandlerManager
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11244))
// CS Name: Zenject.AnimatorMoveHandlerManager
class CORDL_TYPE AnimatorMoveHandlerManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AnimatorMoveHandlerManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorMoveHandlerManager", modifiers: " const&", def_value: None }]
constexpr AnimatorMoveHandlerManager(AnimatorMoveHandlerManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorMoveHandlerManager", modifiers: "&&", def_value: None }]
constexpr AnimatorMoveHandlerManager(AnimatorMoveHandlerManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimatorMoveHandlerManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AnimatorMoveHandlerManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimatorMoveHandlerManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimatorMoveHandlerManager& operator=(AnimatorMoveHandlerManager&& o) noexcept = default;
  constexpr AnimatorMoveHandlerManager& operator=(AnimatorMoveHandlerManager const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler> __declspec(property(get=__get__handlers, put=__set__handlers))  _handlers;

constexpr void __set__handlers(System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler> value) ;

constexpr System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler> __get__handlers() const;


// Methods

/// @brief Method Construct addr 0x2d95558 size 0x8 virtual false final false
 void Construct(System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler> handlers) ;

/// @brief Method OnAnimatorMove addr 0x2d95560 size 0x1b0 virtual false final false
 void OnAnimatorMove() ;

// Ctor Parameters []
explicit AnimatorMoveHandlerManager() ;

/// @brief Method .ctor addr 0x2d95710 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenInjectMethod0 addr 0x2d95718 size 0xdc virtual false final false
static void __zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d957f4 size 0x2f8 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::AnimatorMoveHandlerManager);
DEFINE_IL2CPP_ARG_TYPE(Zenject::AnimatorMoveHandlerManager, "Zenject", "AnimatorMoveHandlerManager");
