#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Net::Sockets {
class SendPacketsElement;
}
// Type: System.Net.Sockets::SendPacketsElement
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8197))
// CS Name: System.Net.Sockets.SendPacketsElement
class CORDL_TYPE SendPacketsElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SendPacketsElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "SendPacketsElement", modifiers: " const&", def_value: None }]
constexpr SendPacketsElement(SendPacketsElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SendPacketsElement", modifiers: "&&", def_value: None }]
constexpr SendPacketsElement(SendPacketsElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SendPacketsElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SendPacketsElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SendPacketsElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SendPacketsElement& operator=(SendPacketsElement&& o) noexcept = default;
  constexpr SendPacketsElement& operator=(SendPacketsElement const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_FilePath, put=__set_m_FilePath))  m_FilePath;

constexpr void __set_m_FilePath(::StringW value) ;

constexpr ::StringW __get_m_FilePath() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Offset, put=__set_m_Offset))  m_Offset;

constexpr void __set_m_Offset(int32_t value) ;

constexpr int32_t __get_m_Offset() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;

 bool __declspec(property(get=__get_m_endOfPacket, put=__set_m_endOfPacket))  m_endOfPacket;

constexpr void __set_m_endOfPacket(bool value) ;

constexpr bool __get_m_endOfPacket() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
NEED_NO_BOX(System::Net::Sockets::SendPacketsElement);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SendPacketsElement, "System.Net.Sockets", "SendPacketsElement");
