#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_OutputAttribute;
}
// Forward declare root types
namespace GlobalNamespace {
class HEU_ExampleInstanceCustomAttribute;
}
// Type: ::HEU_ExampleInstanceCustomAttribute
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9529))
// CS Name: HEU_ExampleInstanceCustomAttribute
class CORDL_TYPE HEU_ExampleInstanceCustomAttribute : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HEU_ExampleInstanceCustomAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ExampleInstanceCustomAttribute", modifiers: " const&", def_value: None }]
constexpr HEU_ExampleInstanceCustomAttribute(HEU_ExampleInstanceCustomAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ExampleInstanceCustomAttribute", modifiers: "&&", def_value: None }]
constexpr HEU_ExampleInstanceCustomAttribute(HEU_ExampleInstanceCustomAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ExampleInstanceCustomAttribute(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HEU_ExampleInstanceCustomAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ExampleInstanceCustomAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ExampleInstanceCustomAttribute& operator=(HEU_ExampleInstanceCustomAttribute&& o) noexcept = default;
  constexpr HEU_ExampleInstanceCustomAttribute& operator=(HEU_ExampleInstanceCustomAttribute const& o) noexcept = default;
                


// Methods

/// @brief Method InstancerCallback addr 0x1fd923c size 0x3ac virtual false final false
 void InstancerCallback() ;

/// @brief Method LogArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void LogArray(::StringW name, ::ArrayW<T> arr, int32_t tupleSize) ;

/// @brief Method LogAttr addr 0x1fd95e8 size 0x154 virtual false final false
static void LogAttr(HoudiniEngineUnity::HEU_OutputAttribute outAttr) ;

static GlobalNamespace::HEU_ExampleInstanceCustomAttribute New_ctor() ;

/// @brief Method .ctor addr 0x1fd973c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HEU_ExampleInstanceCustomAttribute);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HEU_ExampleInstanceCustomAttribute, "", "HEU_ExampleInstanceCustomAttribute");
