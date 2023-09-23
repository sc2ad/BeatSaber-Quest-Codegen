#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class IKeyEvaluator;
}
// Type: UnityEngine.AddressableAssets::IKeyEvaluator
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14371))
// CS Name: UnityEngine.AddressableAssets.IKeyEvaluator
class CORDL_TYPE IKeyEvaluator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IKeyEvaluator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKeyEvaluator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_RuntimeKey))  RuntimeKey;


// Methods

/// @brief Method get_RuntimeKey addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_RuntimeKey() ;

/// @brief Method RuntimeKeyIsValid addr 0x0 size 0xffffffffffffffff virtual true final false
 bool RuntimeKeyIsValid() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(UnityEngine::AddressableAssets::IKeyEvaluator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::IKeyEvaluator, "UnityEngine.AddressableAssets", "IKeyEvaluator");
