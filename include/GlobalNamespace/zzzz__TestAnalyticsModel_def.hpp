#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__TestAnalyticsModel____c;
}
namespace GlobalNamespace {
class TestAnalyticsModel;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4008))
// CS Name: TestAnalyticsModel::<>c
class CORDL_TYPE GlobalNamespace__TestAnalyticsModel____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__TestAnalyticsModel____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TestAnalyticsModel____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__TestAnalyticsModel____c(GlobalNamespace__TestAnalyticsModel____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TestAnalyticsModel____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__TestAnalyticsModel____c(GlobalNamespace__TestAnalyticsModel____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TestAnalyticsModel____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__TestAnalyticsModel____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__TestAnalyticsModel____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__TestAnalyticsModel____c& operator=(GlobalNamespace__TestAnalyticsModel____c&& o) noexcept = default;
  constexpr GlobalNamespace__TestAnalyticsModel____c& operator=(GlobalNamespace__TestAnalyticsModel____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__TestAnalyticsModel____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__TestAnalyticsModel____c value) ;

static GlobalNamespace::GlobalNamespace__TestAnalyticsModel____c __get___9() ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW> value) ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW> __get___9__3_0() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__TestAnalyticsModel____c() ;

/// @brief Method .ctor addr 0x20b3f38 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LogEvent>b__3_0 addr 0x20b3f40 size 0x8c virtual false final false
 ::StringW _LogEvent_b__3_0(System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> kvp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TestAnalyticsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4009))
// CS Name: TestAnalyticsModel
class CORDL_TYPE TestAnalyticsModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__TestAnalyticsModel____c;

/// @brief Convert operator to GlobalNamespace::IAnalyticsModel
constexpr operator  GlobalNamespace::IAnalyticsModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TestAnalyticsModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "TestAnalyticsModel", modifiers: " const&", def_value: None }]
constexpr TestAnalyticsModel(TestAnalyticsModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TestAnalyticsModel", modifiers: "&&", def_value: None }]
constexpr TestAnalyticsModel(TestAnalyticsModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TestAnalyticsModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TestAnalyticsModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TestAnalyticsModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TestAnalyticsModel& operator=(TestAnalyticsModel&& o) noexcept = default;
  constexpr TestAnalyticsModel& operator=(TestAnalyticsModel const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_supportsOpenDataPrivacyPage))  supportsOpenDataPrivacyPage;


// Methods

/// @brief Method get_supportsOpenDataPrivacyPage addr 0x20b39b4 size 0x8 virtual true final true
 bool get_supportsOpenDataPrivacyPage() ;

/// @brief Method OpenDataPrivacyPage addr 0x20b39bc size 0x4 virtual true final true
 void OpenDataPrivacyPage() ;

/// @brief Method LogEvent addr 0x20b39c0 size 0x18c virtual true final true
 void LogEvent(::StringW eventType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> eventData) ;

/// @brief Method LogEditAvatarEvent addr 0x20b3b4c size 0xe0 virtual true final true
 void LogEditAvatarEvent(::StringW eventType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> avatarEventData) ;

/// @brief Method LogClick addr 0x20b3c2c size 0xe0 virtual true final true
 void LogClick(::StringW clickType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> clickData) ;

/// @brief Method LogImpression addr 0x20b3d0c size 0xe0 virtual true final true
 void LogImpression(::StringW impressionType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> impressionData) ;

/// @brief Method LogExposure addr 0x20b3dec size 0xe0 virtual true final true
 void LogExposure(::StringW exposureType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> exposureData) ;

// Ctor Parameters []
explicit TestAnalyticsModel() ;

/// @brief Method .ctor addr 0x20b3ecc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TestAnalyticsModel____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TestAnalyticsModel____c, "", "TestAnalyticsModel/<>c");
NEED_NO_BOX(GlobalNamespace::TestAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestAnalyticsModel, "", "TestAnalyticsModel");
