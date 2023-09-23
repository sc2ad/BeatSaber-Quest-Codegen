#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
namespace GlobalNamespace {
class PosesRecordingInfoSaveData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class RecordingConverter;
}
namespace GlobalNamespace {
class GlobalNamespace__PosesRecordingData__TransformsKeyframe;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesSerializer;
}
// Type: ::PosesSerializer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6030))
// CS Name: PosesSerializer
class CORDL_TYPE PosesSerializer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IPosesSerializer
constexpr operator  GlobalNamespace::IPosesSerializer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PosesSerializer() = default;

// Ctor Parameters [CppParam { name: "", ty: "PosesSerializer", modifiers: " const&", def_value: None }]
constexpr PosesSerializer(PosesSerializer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PosesSerializer", modifiers: "&&", def_value: None }]
constexpr PosesSerializer(PosesSerializer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PosesSerializer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PosesSerializer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PosesSerializer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PosesSerializer& operator=(PosesSerializer&& o) noexcept = default;
  constexpr PosesSerializer& operator=(PosesSerializer const& o) noexcept = default;
                


// Fields

/// @brief Field kInfoFileName offset 0
static constexpr ::ConstString  kInfoFileName{u"Info.json"};

/// @brief Field kDataFileName offset 0
static constexpr ::ConstString  kDataFileName{u"Data.rcd"};

 GlobalNamespace::IBeatSaberLogger __declspec(property(get=__get__logger, put=__set__logger))  _logger;

constexpr void __set__logger(GlobalNamespace::IBeatSaberLogger value) ;

constexpr GlobalNamespace::IBeatSaberLogger __get__logger() const;

 GlobalNamespace::RecordingConverter __declspec(property(get=__get__recordingConverter, put=__set__recordingConverter))  _recordingConverter;

constexpr void __set__recordingConverter(GlobalNamespace::RecordingConverter value) ;

constexpr GlobalNamespace::RecordingConverter __get__recordingConverter() const;


// Methods

// Ctor Parameters [CppParam { name: "logger", ty: "GlobalNamespace::IBeatSaberLogger", modifiers: "", def_value: None }]
explicit PosesSerializer(GlobalNamespace::IBeatSaberLogger logger) ;

/// @brief Method .ctor addr 0x21a6ff8 size 0x80 virtual false final false
 void _ctor(GlobalNamespace::IBeatSaberLogger logger) ;

/// @brief Method SaveInfoFile addr 0x21a70a0 size 0x104 virtual false final false
static void SaveInfoFile(::StringW filePath, GlobalNamespace::PosesRecordingData data) ;

/// @brief Method SaveDataFile addr 0x21a71a4 size 0x368 virtual false final false
static void SaveDataFile(::StringW filePath, GlobalNamespace::PosesRecordingData data) ;

/// @brief Method SaveRecordingIntoDirectory addr 0x21a750c size 0x2a0 virtual false final false
 void SaveRecordingIntoDirectory(::StringW path, GlobalNamespace::PosesRecordingData data) ;

/// @brief Method LoadInfoFile addr 0x21a77ac size 0x1a4 virtual false final false
 GlobalNamespace::PosesRecordingInfoSaveData LoadInfoFile(::StringW filePath) ;

/// @brief Method LoadDataFile addr 0x21a7950 size 0x5fc virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PosesRecordingData__TransformsKeyframe> LoadDataFile(::StringW filePath) ;

/// @brief Method LoadRecordingFromDirectory addr 0x21a7f4c size 0x308 virtual false final false
 GlobalNamespace::PosesRecordingData LoadRecordingFromDirectory(::StringW path) ;

/// @brief Method SaveToOldFormat addr 0x21a8254 size 0x18 virtual true final true
 void SaveToOldFormat(::StringW path, GlobalNamespace::PosesRecordingData data) ;

/// @brief Method SaveRecording addr 0x21a8358 size 0x3c virtual true final true
 void SaveRecording(::StringW path, GlobalNamespace::PosesRecordingData data, bool saveToOldFormat) ;

/// @brief Method LoadRecording addr 0x21a8394 size 0x118 virtual true final true
 GlobalNamespace::PosesRecordingData LoadRecording(::StringW path) ;

/// @brief Method RecordingExists addr 0x21a84ac size 0x340 virtual true final true
 bool RecordingExists(::StringW path) ;

/// @brief Method RecordingCanBeCreated addr 0x21a87ec size 0x4d4 virtual true final true
 bool RecordingCanBeCreated(::StringW path) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PosesSerializer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PosesSerializer, "", "PosesSerializer");
