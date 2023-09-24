#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncProtocolResult;
}
// Type: Mono.Net.Security::AsyncProtocolResult
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7669))
// CS Name: Mono.Net.Security.AsyncProtocolResult
class CORDL_TYPE AsyncProtocolResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AsyncProtocolResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncProtocolResult", modifiers: " const&", def_value: None }]
constexpr AsyncProtocolResult(AsyncProtocolResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncProtocolResult", modifiers: "&&", def_value: None }]
constexpr AsyncProtocolResult(AsyncProtocolResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncProtocolResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncProtocolResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncProtocolResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncProtocolResult& operator=(AsyncProtocolResult&& o) noexcept = default;
  constexpr AsyncProtocolResult& operator=(AsyncProtocolResult const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__UserResult_k__BackingField, put=__set__UserResult_k__BackingField))  _UserResult_k__BackingField;

constexpr void __set__UserResult_k__BackingField(int32_t value) ;

constexpr int32_t __get__UserResult_k__BackingField() const;

 System::Runtime::ExceptionServices::ExceptionDispatchInfo __declspec(property(get=__get__Error_k__BackingField, put=__set__Error_k__BackingField))  _Error_k__BackingField;

constexpr void __set__Error_k__BackingField(System::Runtime::ExceptionServices::ExceptionDispatchInfo value) ;

constexpr System::Runtime::ExceptionServices::ExceptionDispatchInfo __get__Error_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_UserResult))  UserResult;

 System::Runtime::ExceptionServices::ExceptionDispatchInfo __declspec(property(get=get_Error))  Error;


// Methods

/// @brief Method get_UserResult addr 0x268c80c size 0x8 virtual false final false
 int32_t get_UserResult() ;

/// @brief Method get_Error addr 0x268c814 size 0x8 virtual false final false
 System::Runtime::ExceptionServices::ExceptionDispatchInfo get_Error() ;

static Mono::Net::Security::AsyncProtocolResult New_ctor(int32_t result) ;

/// @brief Method .ctor addr 0x268c81c size 0x28 virtual false final false
 void _ctor(int32_t result) ;

static Mono::Net::Security::AsyncProtocolResult New_ctor(System::Runtime::ExceptionServices::ExceptionDispatchInfo error) ;

/// @brief Method .ctor addr 0x268c844 size 0x28 virtual false final false
 void _ctor(System::Runtime::ExceptionServices::ExceptionDispatchInfo error) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::AsyncProtocolResult);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::AsyncProtocolResult, "Mono.Net.Security", "AsyncProtocolResult");
