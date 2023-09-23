#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Net {
class TransportContext;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Net::Http {
class ByteArrayContent;
}
// Type: System.Net.Http::ByteArrayContent
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14809))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14800))
// CS Name: System.Net.Http.ByteArrayContent
class CORDL_TYPE ByteArrayContent : public System::Net::Http::HttpContent {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ByteArrayContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteArrayContent", modifiers: " const&", def_value: None }]
constexpr ByteArrayContent(ByteArrayContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteArrayContent", modifiers: "&&", def_value: None }]
constexpr ByteArrayContent(ByteArrayContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ByteArrayContent(void* ptr) noexcept : System::Net::Http::HttpContent(ptr) {
}


  constexpr ByteArrayContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ByteArrayContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ByteArrayContent& operator=(ByteArrayContent&& o) noexcept = default;
  constexpr ByteArrayContent& operator=(ByteArrayContent const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_content() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

// Ctor Parameters [CppParam { name: "content", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ByteArrayContent(::ArrayW<uint8_t> content) ;

/// @brief Method .ctor addr 0x269f1c4 size 0x80 virtual false final false
 void _ctor(::ArrayW<uint8_t> content) ;

/// @brief Method SerializeToStreamAsync addr 0x269f24c size 0x28 virtual true final false
 System::Threading::Tasks::Task SerializeToStreamAsync(System::IO::Stream stream, System::Net::TransportContext context) ;

/// @brief Method TryComputeLength addr 0x269f274 size 0x10 virtual true final false
 bool TryComputeLength(ByRef<int64_t> length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::ByteArrayContent);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::ByteArrayContent, "System.Net.Http", "ByteArrayContent");
