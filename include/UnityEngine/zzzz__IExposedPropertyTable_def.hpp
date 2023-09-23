#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class IExposedPropertyTable;
}
// Type: UnityEngine::IExposedPropertyTable
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9989))
// CS Name: UnityEngine.IExposedPropertyTable
class CORDL_TYPE IExposedPropertyTable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IExposedPropertyTable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IExposedPropertyTable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetReferenceValue addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Object GetReferenceValue(UnityEngine::PropertyName id, ByRef<bool> idValid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::IExposedPropertyTable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::IExposedPropertyTable, "UnityEngine", "IExposedPropertyTable");
