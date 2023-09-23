#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include <cstdint>
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine::UIElements::UIR {
class GradientRemap;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class VectorImageRenderInfo;
}
// Type: UnityEngine.UIElements.UIR::VectorImageRenderInfo
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7499), inst: 395 }), TypeDefinitionIndex(TypeDefinitionIndex(7499))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7519))
// CS Name: UnityEngine.UIElements.UIR.VectorImageRenderInfo
class CORDL_TYPE VectorImageRenderInfo : public UnityEngine::UIElements::UIR::LinkedPoolItem_1<UnityEngine::UIElements::UIR::VectorImageRenderInfo> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~VectorImageRenderInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfo", modifiers: " const&", def_value: None }]
constexpr VectorImageRenderInfo(VectorImageRenderInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfo", modifiers: "&&", def_value: None }]
constexpr VectorImageRenderInfo(VectorImageRenderInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VectorImageRenderInfo(void* ptr) noexcept : UnityEngine::UIElements::UIR::LinkedPoolItem_1<UnityEngine::UIElements::UIR::VectorImageRenderInfo>(ptr) {
}


  constexpr VectorImageRenderInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VectorImageRenderInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VectorImageRenderInfo& operator=(VectorImageRenderInfo&& o) noexcept = default;
  constexpr VectorImageRenderInfo& operator=(VectorImageRenderInfo const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_useCount, put=__set_useCount))  useCount;

constexpr void __set_useCount(int32_t value) ;

constexpr int32_t __get_useCount() const;

 UnityEngine::UIElements::UIR::GradientRemap __declspec(property(get=__get_firstGradientRemap, put=__set_firstGradientRemap))  firstGradientRemap;

constexpr void __set_firstGradientRemap(UnityEngine::UIElements::UIR::GradientRemap value) ;

constexpr UnityEngine::UIElements::UIR::GradientRemap __get_firstGradientRemap() const;

 UnityEngine::UIElements::UIR::Alloc __declspec(property(get=__get_gradientSettingsAlloc, put=__set_gradientSettingsAlloc))  gradientSettingsAlloc;

constexpr void __set_gradientSettingsAlloc(UnityEngine::UIElements::UIR::Alloc value) ;

constexpr UnityEngine::UIElements::UIR::Alloc __get_gradientSettingsAlloc() const;


// Methods

/// @brief Method Reset addr 0x2c54350 size 0x10 virtual false final false
 void Reset() ;

// Ctor Parameters []
explicit VectorImageRenderInfo() ;

/// @brief Method .ctor addr 0x2c542e8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::VectorImageRenderInfo);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::VectorImageRenderInfo, "UnityEngine.UIElements.UIR", "VectorImageRenderInfo");
