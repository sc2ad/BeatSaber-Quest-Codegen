#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class GradientRemap;
}
// Type: UnityEngine.UIElements.UIR::GradientRemap
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7499), inst: 300 }), TypeDefinitionIndex(TypeDefinitionIndex(7499))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7522))
// CS Name: UnityEngine.UIElements.UIR.GradientRemap
class CORDL_TYPE GradientRemap : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::GradientRemap> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GradientRemap() = default;

// Ctor Parameters [CppParam { name: "", ty: "GradientRemap", modifiers: " const&", def_value: None }]
constexpr GradientRemap(GradientRemap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GradientRemap", modifiers: "&&", def_value: None }]
constexpr GradientRemap(GradientRemap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GradientRemap(void* ptr) noexcept : ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::GradientRemap>(ptr) {
}


  constexpr GradientRemap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GradientRemap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GradientRemap& operator=(GradientRemap&& o) noexcept = default;
  constexpr GradientRemap& operator=(GradientRemap const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_origIndex, put=__set_origIndex))  origIndex;

constexpr void __set_origIndex(int32_t value) ;

constexpr int32_t __get_origIndex() const;

 int32_t __declspec(property(get=__get_destIndex, put=__set_destIndex))  destIndex;

constexpr void __set_destIndex(int32_t value) ;

constexpr int32_t __get_destIndex() const;

 ::UnityEngine::RectInt __declspec(property(get=__get_location, put=__set_location))  location;

constexpr void __set_location(::UnityEngine::RectInt value) ;

constexpr ::UnityEngine::RectInt __get_location() const;

 ::UnityEngine::UIElements::UIR::GradientRemap __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(::UnityEngine::UIElements::UIR::GradientRemap value) ;

constexpr ::UnityEngine::UIElements::UIR::GradientRemap __get_next() const;

 ::UnityEngine::UIElements::TextureId __declspec(property(get=__get_atlas, put=__set_atlas))  atlas;

constexpr void __set_atlas(::UnityEngine::UIElements::TextureId value) ;

constexpr ::UnityEngine::UIElements::TextureId __get_atlas() const;


// Methods

/// @brief Method Reset addr 0x2c54608 size 0x68 virtual false final false
 void Reset() ;

// Ctor Parameters []
explicit GradientRemap() ;

/// @brief Method .ctor addr 0x2c545ac size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UIR::GradientRemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GradientRemap, "UnityEngine.UIElements.UIR", "GradientRemap");
