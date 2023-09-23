#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class PingResult;
}
// Type: Oculus.Platform.Models::PingResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13461))
// CS Name: Oculus.Platform.Models.PingResult
class CORDL_TYPE PingResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PingResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "PingResult", modifiers: " const&", def_value: None }]
constexpr PingResult(PingResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PingResult", modifiers: "&&", def_value: None }]
constexpr PingResult(PingResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PingResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PingResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PingResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PingResult& operator=(PingResult&& o) noexcept = default;
  constexpr PingResult& operator=(PingResult const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get__ID_k__BackingField, put=__set__ID_k__BackingField))  _ID_k__BackingField;

constexpr void __set__ID_k__BackingField(uint64_t value) ;

constexpr uint64_t __get__ID_k__BackingField() const;

 System::Nullable_1<uint64_t> __declspec(property(get=__get_pingTimeUsec, put=__set_pingTimeUsec))  pingTimeUsec;

constexpr void __set_pingTimeUsec(System::Nullable_1<uint64_t> value) ;

constexpr System::Nullable_1<uint64_t> __get_pingTimeUsec() const;


// Properties

 uint64_t __declspec(property(get=get_ID, put=set_ID))  ID;

 uint64_t __declspec(property(get=get_PingTimeUsec))  PingTimeUsec;

 bool __declspec(property(get=get_IsTimeout))  IsTimeout;


// Methods

// Ctor Parameters [CppParam { name: "id", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pingTimeUsec", ty: "System::Nullable_1<uint64_t>", modifiers: "", def_value: None }]
explicit PingResult(uint64_t id, System::Nullable_1<uint64_t> pingTimeUsec) ;

/// @brief Method .ctor addr 0x25a2294 size 0x3c virtual false final false
 void _ctor(uint64_t id, System::Nullable_1<uint64_t> pingTimeUsec) ;

/// @brief Method get_ID addr 0x25a22d0 size 0x8 virtual false final false
 uint64_t get_ID() ;

/// @brief Method set_ID addr 0x25a22d8 size 0x8 virtual false final false
 void set_ID(uint64_t value) ;

/// @brief Method get_PingTimeUsec addr 0x25a22e0 size 0x6c virtual false final false
 uint64_t get_PingTimeUsec() ;

/// @brief Method get_IsTimeout addr 0x25a234c size 0x44 virtual false final false
 bool get_IsTimeout() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::PingResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PingResult, "Oculus.Platform.Models", "PingResult");
