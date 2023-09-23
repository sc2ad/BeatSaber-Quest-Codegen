#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Net {
class CommandStream;
}
namespace System::Net {
class ResponseDescription;
}
// Forward declare root types
namespace System::Net {
class ReceiveState;
}
// Type: System.Net::ReceiveState
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7889))
// CS Name: System.Net.ReceiveState
class CORDL_TYPE ReceiveState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ReceiveState() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReceiveState", modifiers: " const&", def_value: None }]
constexpr ReceiveState(ReceiveState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReceiveState", modifiers: "&&", def_value: None }]
constexpr ReceiveState(ReceiveState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReceiveState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReceiveState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReceiveState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReceiveState& operator=(ReceiveState&& o) noexcept = default;
  constexpr ReceiveState& operator=(ReceiveState const& o) noexcept = default;
                


// Fields

 System::Net::ResponseDescription __declspec(property(get=__get_Resp, put=__set_Resp))  Resp;

constexpr void __set_Resp(System::Net::ResponseDescription value) ;

constexpr System::Net::ResponseDescription __get_Resp() const;

 int32_t __declspec(property(get=__get_ValidThrough, put=__set_ValidThrough))  ValidThrough;

constexpr void __set_ValidThrough(int32_t value) ;

constexpr int32_t __get_ValidThrough() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Buffer, put=__set_Buffer))  Buffer;

constexpr void __set_Buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Buffer() const;

 System::Net::CommandStream __declspec(property(get=__get_Connection, put=__set_Connection))  Connection;

constexpr void __set_Connection(System::Net::CommandStream value) ;

constexpr System::Net::CommandStream __get_Connection() const;


// Methods

// Ctor Parameters [CppParam { name: "connection", ty: "System::Net::CommandStream", modifiers: "", def_value: None }]
explicit ReceiveState(System::Net::CommandStream connection) ;

/// @brief Method .ctor addr 0x27fd37c size 0xa0 virtual false final false
 void _ctor(System::Net::CommandStream connection) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ReceiveState);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ReceiveState, "System.Net", "ReceiveState");
