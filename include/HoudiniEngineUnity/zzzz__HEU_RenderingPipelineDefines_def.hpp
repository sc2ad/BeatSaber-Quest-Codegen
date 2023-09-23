#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace HoudiniEngineUnity {
struct HEU_PipelineType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_RenderingPipelineDefines;
}
// Type: HoudiniEngineUnity::HEU_RenderingPipelineDefines
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9795))
// CS Name: HoudiniEngineUnity.HEU_RenderingPipelineDefines
class CORDL_TYPE HEU_RenderingPipelineDefines : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_RenderingPipelineDefines() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_RenderingPipelineDefines", modifiers: " const&", def_value: None }]
constexpr HEU_RenderingPipelineDefines(HEU_RenderingPipelineDefines const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_RenderingPipelineDefines", modifiers: "&&", def_value: None }]
constexpr HEU_RenderingPipelineDefines(HEU_RenderingPipelineDefines&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_RenderingPipelineDefines(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_RenderingPipelineDefines& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_RenderingPipelineDefines& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_RenderingPipelineDefines& operator=(HEU_RenderingPipelineDefines&& o) noexcept = default;
  constexpr HEU_RenderingPipelineDefines& operator=(HEU_RenderingPipelineDefines const& o) noexcept = default;
                


// Methods

/// @brief Method UpdateDefines addr 0x205e9cc size 0xd8 virtual false final false
static void UpdateDefines() ;

/// @brief Method GetPipeline addr 0x205eaa4 size 0x130 virtual false final false
static HoudiniEngineUnity::HEU_PipelineType GetPipeline() ;

/// @brief Method AddDefine addr 0x205ebd4 size 0x108 virtual false final false
static void AddDefine(::StringW define) ;

/// @brief Method RemoveDefine addr 0x205ecdc size 0xc0 virtual false final false
static void RemoveDefine(::StringW define) ;

/// @brief Method GetDefines addr 0x205ed9c size 0x70 virtual false final false
static System::Collections::Generic::List_1<::StringW> GetDefines() ;

/// @brief Method SetDefines addr 0x205ee0c size 0x4 virtual false final false
static void SetDefines(System::Collections::Generic::List_1<::StringW> definesList) ;

// Ctor Parameters []
explicit HEU_RenderingPipelineDefines() ;

/// @brief Method .ctor addr 0x205ee10 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_RenderingPipelineDefines);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_RenderingPipelineDefines, "HoudiniEngineUnity", "HEU_RenderingPipelineDefines");
