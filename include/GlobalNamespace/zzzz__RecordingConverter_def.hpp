#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class PosesRecordingData;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingConverter;
}
// Type: ::RecordingConverter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6031))
// CS Name: RecordingConverter
class CORDL_TYPE RecordingConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RecordingConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingConverter", modifiers: " const&", def_value: None }]
constexpr RecordingConverter(RecordingConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingConverter", modifiers: "&&", def_value: None }]
constexpr RecordingConverter(RecordingConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RecordingConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingConverter& operator=(RecordingConverter&& o) noexcept = default;
  constexpr RecordingConverter& operator=(RecordingConverter const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IBeatSaberLogger __declspec(property(get=__get__logger, put=__set__logger))  _logger;

constexpr void __set__logger(::GlobalNamespace::IBeatSaberLogger value) ;

constexpr ::GlobalNamespace::IBeatSaberLogger __get__logger() const;


// Methods

// Ctor Parameters [CppParam { name: "logger", ty: "::GlobalNamespace::IBeatSaberLogger", modifiers: "", def_value: None }]
explicit RecordingConverter(::GlobalNamespace::IBeatSaberLogger logger) ;

/// @brief Method .ctor addr 0x21a7078 size 0x28 virtual false final false
 void _ctor(::GlobalNamespace::IBeatSaberLogger logger) ;

/// @brief Method SaveToOldFormat addr 0x21a826c size 0xec virtual false final false
 void SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::RecordingConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingConverter, "", "RecordingConverter");
