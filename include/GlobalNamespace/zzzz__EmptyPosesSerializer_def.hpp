#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
// Forward declare root types
namespace GlobalNamespace {
class EmptyPosesSerializer;
}
// Type: ::EmptyPosesSerializer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6004))
// CS Name: EmptyPosesSerializer
class CORDL_TYPE EmptyPosesSerializer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IPosesSerializer
constexpr operator  ::GlobalNamespace::IPosesSerializer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyPosesSerializer() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyPosesSerializer", modifiers: " const&", def_value: None }]
constexpr EmptyPosesSerializer(EmptyPosesSerializer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyPosesSerializer", modifiers: "&&", def_value: None }]
constexpr EmptyPosesSerializer(EmptyPosesSerializer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyPosesSerializer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyPosesSerializer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyPosesSerializer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyPosesSerializer& operator=(EmptyPosesSerializer&& o) noexcept = default;
  constexpr EmptyPosesSerializer& operator=(EmptyPosesSerializer const& o) noexcept = default;
                


// Methods

/// @brief Method SaveToOldFormat addr 0x21a3c7c size 0x4 virtual true final true
 void SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData data) ;

/// @brief Method SaveRecording addr 0x21a3c80 size 0x4 virtual true final true
 void SaveRecording(::StringW path, ::GlobalNamespace::PosesRecordingData data, bool saveToOldFormat) ;

/// @brief Method LoadRecording addr 0x21a3c84 size 0x8 virtual true final true
 ::GlobalNamespace::PosesRecordingData LoadRecording(::StringW path) ;

/// @brief Method RecordingExists addr 0x21a3c8c size 0x8 virtual true final true
 bool RecordingExists(::StringW path) ;

/// @brief Method RecordingCanBeCreated addr 0x21a3c94 size 0x8 virtual true final true
 bool RecordingCanBeCreated(::StringW path) ;

// Ctor Parameters []
explicit EmptyPosesSerializer() ;

/// @brief Method .ctor addr 0x21a3c9c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EmptyPosesSerializer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EmptyPosesSerializer, "", "EmptyPosesSerializer");
