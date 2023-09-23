#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class PosesRecordingData;
}
// Forward declare root types
namespace GlobalNamespace {
class IPosesSerializer;
}
// Type: ::IPosesSerializer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6005))
// CS Name: IPosesSerializer
class CORDL_TYPE IPosesSerializer : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPosesSerializer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPosesSerializer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SaveToOldFormat addr 0x0 size 0xffffffffffffffff virtual true final false
 void SaveToOldFormat(::StringW path, GlobalNamespace::PosesRecordingData data) ;

/// @brief Method SaveRecording addr 0x0 size 0xffffffffffffffff virtual true final false
 void SaveRecording(::StringW path, GlobalNamespace::PosesRecordingData data, bool saveToOldFormat) ;

/// @brief Method LoadRecording addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::PosesRecordingData LoadRecording(::StringW path) ;

/// @brief Method RecordingExists addr 0x0 size 0xffffffffffffffff virtual true final false
 bool RecordingExists(::StringW path) ;

/// @brief Method RecordingCanBeCreated addr 0x0 size 0xffffffffffffffff virtual true final false
 bool RecordingCanBeCreated(::StringW path) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IPosesSerializer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IPosesSerializer, "", "IPosesSerializer");
