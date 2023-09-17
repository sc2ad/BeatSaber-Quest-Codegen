#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ShaderInfoStorage_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class ShaderInfoStorageRGBAFloat;
}
namespace UnityEngine::UIElements::UIR {
class ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c;
}
// Type: ::<>c
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7484))
// CS Name: UnityEngine.UIElements.UIR.ShaderInfoStorageRGBAFloat::<>c
class CORDL_TYPE ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c(____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c(____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c& operator=(____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c& operator=(____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c value) ;

static ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c __get___9() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c() ;

/// @brief Method .ctor addr 0x2d156d4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__2_0 addr 0x2d156dc size 0x4 virtual false final false
 ::UnityEngine::Color __cctor_b__2_0(::UnityEngine::Color c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::ShaderInfoStorageRGBAFloat
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7481), inst: 280 }), TypeDefinitionIndex(TypeDefinitionIndex(7481)), TypeDefinitionIndex(TypeDefinitionIndex(10192))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7485))
// CS Name: UnityEngine.UIElements.UIR.ShaderInfoStorageRGBAFloat
class CORDL_TYPE ShaderInfoStorageRGBAFloat : public ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<::UnityEngine::Color> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ShaderInfoStorageRGBAFloat() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBAFloat", modifiers: " const&", def_value: None }]
constexpr ShaderInfoStorageRGBAFloat(ShaderInfoStorageRGBAFloat const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBAFloat", modifiers: "&&", def_value: None }]
constexpr ShaderInfoStorageRGBAFloat(ShaderInfoStorageRGBAFloat&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShaderInfoStorageRGBAFloat(void* ptr) noexcept : ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<::UnityEngine::Color>(ptr) {
}


  constexpr ShaderInfoStorageRGBAFloat& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShaderInfoStorageRGBAFloat& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShaderInfoStorageRGBAFloat& operator=(ShaderInfoStorageRGBAFloat&& o) noexcept = default;
  constexpr ShaderInfoStorageRGBAFloat& operator=(ShaderInfoStorageRGBAFloat const& o) noexcept = default;
                


// Fields

static ::System::Func_2<::UnityEngine::Color,::UnityEngine::Color> __declspec(property(get=__get_s_Convert, put=__set_s_Convert))  s_Convert;

static void __set_s_Convert(::System::Func_2<::UnityEngine::Color,::UnityEngine::Color> value) ;

static ::System::Func_2<::UnityEngine::Color,::UnityEngine::Color> __get_s_Convert() ;


// Methods

// Ctor Parameters [CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit ShaderInfoStorageRGBAFloat(int32_t initialSize, int32_t maxSize) ;

/// @brief Method .ctor addr 0x2d130c8 size 0x94 virtual false final false
 void _ctor(int32_t initialSize, int32_t maxSize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBAFloat");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__ShaderInfoStorageRGBAFloat____c, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBAFloat/<>c");
