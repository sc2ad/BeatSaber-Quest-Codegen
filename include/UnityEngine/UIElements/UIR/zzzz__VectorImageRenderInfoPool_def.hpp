#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageRenderInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageRenderInfo;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageRenderInfoPool;
}
// Type: ::<>c
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7517))
// CS Name: UnityEngine.UIElements.UIR.VectorImageRenderInfoPool::<>c
class CORDL_TYPE UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c(UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c(UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c& operator=(UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c& operator=(UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c value) ;

static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c __get___9() ;

static System::Func_1<UnityEngine::UIElements::UIR::VectorImageRenderInfo> __declspec(property(get=__get___9__0_0, put=__set___9__0_0))  __9__0_0;

static void __set___9__0_0(System::Func_1<UnityEngine::UIElements::UIR::VectorImageRenderInfo> value) ;

static System::Func_1<UnityEngine::UIElements::UIR::VectorImageRenderInfo> __get___9__0_0() ;

static System::Action_1<UnityEngine::UIElements::UIR::VectorImageRenderInfo> __declspec(property(get=__get___9__0_1, put=__set___9__0_1))  __9__0_1;

static void __set___9__0_1(System::Action_1<UnityEngine::UIElements::UIR::VectorImageRenderInfo> value) ;

static System::Action_1<UnityEngine::UIElements::UIR::VectorImageRenderInfo> __get___9__0_1() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c() ;

/// @brief Method .ctor addr 0x2c54288 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__0_0 addr 0x2c54290 size 0x58 virtual false final false
 UnityEngine::UIElements::UIR::VectorImageRenderInfo __ctor_b__0_0() ;

/// @brief Method <.ctor>b__0_1 addr 0x2c54330 size 0x20 virtual false final false
 void __ctor_b__0_1(UnityEngine::UIElements::UIR::VectorImageRenderInfo vectorImageInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::VectorImageRenderInfoPool
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7519)), TypeDefinitionIndex(TypeDefinitionIndex(7500)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7500), inst: 395 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7518))
// CS Name: UnityEngine.UIElements.UIR.VectorImageRenderInfoPool
class CORDL_TYPE VectorImageRenderInfoPool : public UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::VectorImageRenderInfo> {
public:
// Declarations
using __c = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~VectorImageRenderInfoPool() = default;

// Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfoPool", modifiers: " const&", def_value: None }]
constexpr VectorImageRenderInfoPool(VectorImageRenderInfoPool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfoPool", modifiers: "&&", def_value: None }]
constexpr VectorImageRenderInfoPool(VectorImageRenderInfoPool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VectorImageRenderInfoPool(void* ptr) noexcept : UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::VectorImageRenderInfo>(ptr) {
}


  constexpr VectorImageRenderInfoPool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VectorImageRenderInfoPool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VectorImageRenderInfoPool& operator=(VectorImageRenderInfoPool&& o) noexcept = default;
  constexpr VectorImageRenderInfoPool& operator=(VectorImageRenderInfoPool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit VectorImageRenderInfoPool() ;

/// @brief Method .ctor addr 0x2c5409c size 0x188 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__VectorImageRenderInfoPool____c, "UnityEngine.UIElements.UIR", "VectorImageRenderInfoPool/<>c");
NEED_NO_BOX(UnityEngine::UIElements::UIR::VectorImageRenderInfoPool);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::VectorImageRenderInfoPool, "UnityEngine.UIElements.UIR", "VectorImageRenderInfoPool");
