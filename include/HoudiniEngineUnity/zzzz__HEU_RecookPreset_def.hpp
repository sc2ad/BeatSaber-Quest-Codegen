#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
class HEU_InputPreset;
}
namespace HoudiniEngineUnity {
class HEU_VolumeCachePreset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_RecookPreset;
}
// Type: HoudiniEngineUnity::HEU_RecookPreset
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9554))
// CS Name: HoudiniEngineUnity.HEU_RecookPreset
class CORDL_TYPE HEU_RecookPreset : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HEU_RecookPreset() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_RecookPreset", modifiers: " const&", def_value: None }]
constexpr HEU_RecookPreset(HEU_RecookPreset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_RecookPreset", modifiers: "&&", def_value: None }]
constexpr HEU_RecookPreset(HEU_RecookPreset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_RecookPreset(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_RecookPreset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_RecookPreset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_RecookPreset& operator=(HEU_RecookPreset&& o) noexcept = default;
  constexpr HEU_RecookPreset& operator=(HEU_RecookPreset const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCachePreset> __declspec(property(get=__get__volumeCachePresets, put=__set__volumeCachePresets))  _volumeCachePresets;

constexpr void __set__volumeCachePresets(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCachePreset> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCachePreset> __get__volumeCachePresets() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputPreset> __declspec(property(get=__get__inputPresets, put=__set__inputPresets))  _inputPresets;

constexpr void __set__inputPresets(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputPreset> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputPreset> __get__inputPresets() const;


// Methods

// Ctor Parameters []
explicit HEU_RecookPreset() ;

/// @brief Method .ctor addr 0x1fdb068 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_RecookPreset);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_RecookPreset, "HoudiniEngineUnity", "HEU_RecookPreset");
