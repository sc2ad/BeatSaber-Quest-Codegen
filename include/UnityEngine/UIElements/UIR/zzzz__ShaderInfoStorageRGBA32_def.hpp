#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ShaderInfoStorage_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Color32;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class ShaderInfoStorageRGBA32;
}
namespace UnityEngine::UIElements::UIR {
class ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c;
}
// Type: ::<>c
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7482))
// CS Name: UnityEngine.UIElements.UIR.ShaderInfoStorageRGBA32::<>c
class CORDL_TYPE ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c(____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c(____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c& operator=(____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c& operator=(____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c value) ;

static ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c __get___9() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c() ;

/// @brief Method .ctor addr 0x2d152e0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__2_0 addr 0x2d152e8 size 0x2c4 virtual false final false
 ::UnityEngine::Color32 __cctor_b__2_0(::UnityEngine::Color c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::ShaderInfoStorageRGBA32
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7481), inst: 718 }), TypeDefinitionIndex(TypeDefinitionIndex(10191)), TypeDefinitionIndex(TypeDefinitionIndex(7481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7483))
// CS Name: UnityEngine.UIElements.UIR.ShaderInfoStorageRGBA32
class CORDL_TYPE ShaderInfoStorageRGBA32 : public ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<::UnityEngine::Color32> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ShaderInfoStorageRGBA32() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBA32", modifiers: " const&", def_value: None }]
constexpr ShaderInfoStorageRGBA32(ShaderInfoStorageRGBA32 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBA32", modifiers: "&&", def_value: None }]
constexpr ShaderInfoStorageRGBA32(ShaderInfoStorageRGBA32&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShaderInfoStorageRGBA32(void* ptr) noexcept : ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<::UnityEngine::Color32>(ptr) {
}


  constexpr ShaderInfoStorageRGBA32& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShaderInfoStorageRGBA32& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShaderInfoStorageRGBA32& operator=(ShaderInfoStorageRGBA32&& o) noexcept = default;
  constexpr ShaderInfoStorageRGBA32& operator=(ShaderInfoStorageRGBA32 const& o) noexcept = default;
                


// Fields

static ::System::Func_2<::UnityEngine::Color,::UnityEngine::Color32> __declspec(property(get=__get_s_Convert, put=__set_s_Convert))  s_Convert;

static void __set_s_Convert(::System::Func_2<::UnityEngine::Color,::UnityEngine::Color32> value) ;

static ::System::Func_2<::UnityEngine::Color,::UnityEngine::Color32> __get_s_Convert() ;


// Methods

// Ctor Parameters [CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit ShaderInfoStorageRGBA32(int32_t initialSize, int32_t maxSize) ;

/// @brief Method .ctor addr 0x2d1315c size 0x94 virtual false final false
 void _ctor(int32_t initialSize, int32_t maxSize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBA32");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBA32/<>c");
