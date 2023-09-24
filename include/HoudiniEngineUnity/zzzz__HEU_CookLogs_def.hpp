#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_CookLogs;
}
// Type: HoudiniEngineUnity::HEU_CookLogs
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9759))
// CS Name: HoudiniEngineUnity.HEU_CookLogs
class CORDL_TYPE HEU_CookLogs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_CookLogs() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_CookLogs", modifiers: " const&", def_value: None }]
constexpr HEU_CookLogs(HEU_CookLogs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_CookLogs", modifiers: "&&", def_value: None }]
constexpr HEU_CookLogs(HEU_CookLogs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_CookLogs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_CookLogs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_CookLogs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_CookLogs& operator=(HEU_CookLogs&& o) noexcept = default;
  constexpr HEU_CookLogs& operator=(HEU_CookLogs const& o) noexcept = default;
                


// Fields

static HoudiniEngineUnity::HEU_CookLogs __declspec(property(get=__get__instance, put=__set__instance))  _instance;

static void __set__instance(HoudiniEngineUnity::HEU_CookLogs value) ;

static HoudiniEngineUnity::HEU_CookLogs __get__instance() ;

 System::Text::StringBuilder __declspec(property(get=__get__cookLogs, put=__set__cookLogs))  _cookLogs;

constexpr void __set__cookLogs(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get__cookLogs() const;

 int32_t __declspec(property(get=__get__currentCookLogCount, put=__set__currentCookLogCount))  _currentCookLogCount;

constexpr void __set__currentCookLogCount(int32_t value) ;

constexpr int32_t __get__currentCookLogCount() const;

/// @brief Field MAX_COOK_LOG_COUNT offset 0
static constexpr int32_t  MAX_COOK_LOG_COUNT{9001};

 ::StringW __declspec(property(get=__get__lastLogStr, put=__set__lastLogStr))  _lastLogStr;

constexpr void __set__lastLogStr(::StringW value) ;

constexpr ::StringW __get__lastLogStr() const;

 bool __declspec(property(get=__get__uniqueStrOnly, put=__set__uniqueStrOnly))  _uniqueStrOnly;

constexpr void __set__uniqueStrOnly(bool value) ;

constexpr bool __get__uniqueStrOnly() const;

/// @brief Field MaxLogSize offset 0
static constexpr int64_t  MaxLogSize{50000000};


// Properties

static HoudiniEngineUnity::HEU_CookLogs __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method get_Instance addr 0x2040e58 size 0x7c virtual false final false
static HoudiniEngineUnity::HEU_CookLogs get_Instance() ;

/// @brief Method GetCookLogString addr 0x2040f60 size 0x20 virtual false final false
 ::StringW GetCookLogString() ;

/// @brief Method AppendCookLog addr 0x2040f80 size 0x100 virtual false final false
 void AppendCookLog(::StringW logStr) ;

/// @brief Method ClearCookLog addr 0x20412c8 size 0x64 virtual false final false
 void ClearCookLog() ;

/// @brief Method GetCookLogFilePath addr 0x204132c size 0xd4 virtual false final false
 ::StringW GetCookLogFilePath() ;

/// @brief Method DeleteCookingFile addr 0x2041400 size 0x88 virtual false final false
 void DeleteCookingFile() ;

/// @brief Method WriteToLogFile addr 0x2041080 size 0x248 virtual false final false
 void WriteToLogFile(::StringW logStr, bool checkLastLogStr) ;

/// @brief Method GetFileSizeOfLogFile addr 0x2041488 size 0x88 virtual false final false
 int64_t GetFileSizeOfLogFile() ;

static HoudiniEngineUnity::HEU_CookLogs New_ctor() ;

/// @brief Method .ctor addr 0x2040ed4 size 0x8c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_CookLogs);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_CookLogs, "HoudiniEngineUnity", "HEU_CookLogs");
