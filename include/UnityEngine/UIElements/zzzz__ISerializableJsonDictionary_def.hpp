#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class ISerializableJsonDictionary;
}
// Type: UnityEngine.UIElements::ISerializableJsonDictionary
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7003))
// CS Name: UnityEngine.UIElements.ISerializableJsonDictionary
class CORDL_TYPE ISerializableJsonDictionary : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISerializableJsonDictionary() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISerializableJsonDictionary(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 void Set(::StringW key, T value) ;

/// @brief Method Overwrite addr 0x0 size 0xffffffffffffffff virtual true final false
 void Overwrite(::bs_hook::Il2CppWrapperType obj, ::StringW key) ;

/// @brief Method ContainsKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ContainsKey(::StringW key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::ISerializableJsonDictionary);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ISerializableJsonDictionary, "UnityEngine.UIElements", "ISerializableJsonDictionary");
