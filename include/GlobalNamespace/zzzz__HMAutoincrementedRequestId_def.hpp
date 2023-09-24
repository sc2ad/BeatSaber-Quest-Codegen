#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class HMAutoincrementedRequestId;
}
// Type: ::HMAutoincrementedRequestId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13806))
// CS Name: HMAutoincrementedRequestId
class CORDL_TYPE HMAutoincrementedRequestId : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::HMAutoincrementedRequestId>
constexpr operator  System::IEquatable_1<GlobalNamespace::HMAutoincrementedRequestId>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HMAutoincrementedRequestId() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMAutoincrementedRequestId", modifiers: " const&", def_value: None }]
constexpr HMAutoincrementedRequestId(HMAutoincrementedRequestId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMAutoincrementedRequestId", modifiers: "&&", def_value: None }]
constexpr HMAutoincrementedRequestId(HMAutoincrementedRequestId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMAutoincrementedRequestId(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMAutoincrementedRequestId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMAutoincrementedRequestId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMAutoincrementedRequestId& operator=(HMAutoincrementedRequestId&& o) noexcept = default;
  constexpr HMAutoincrementedRequestId& operator=(HMAutoincrementedRequestId const& o) noexcept = default;
                


// Fields

static uint64_t __declspec(property(get=__get__nextRequestId, put=__set__nextRequestId))  _nextRequestId;

static void __set__nextRequestId(uint64_t value) ;

static uint64_t __get__nextRequestId() ;

 uint64_t __declspec(property(get=__get__requestId, put=__set__requestId))  _requestId;

constexpr void __set__requestId(uint64_t value) ;

constexpr uint64_t __get__requestId() const;


// Properties

 uint64_t __declspec(property(get=get_RequestId))  RequestId;


// Methods

/// @brief Method get_RequestId addr 0x1f7887c size 0x8 virtual false final false
 uint64_t get_RequestId() ;

static GlobalNamespace::HMAutoincrementedRequestId New_ctor() ;

/// @brief Method .ctor addr 0x1f786ac size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method Equals addr 0x1f78884 size 0x20 virtual true final true
 bool Equals(GlobalNamespace::HMAutoincrementedRequestId obj) ;

/// @brief Method Equals addr 0x1f788a4 size 0xb8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x1f7895c size 0x28 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HMAutoincrementedRequestId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HMAutoincrementedRequestId, "", "HMAutoincrementedRequestId");
