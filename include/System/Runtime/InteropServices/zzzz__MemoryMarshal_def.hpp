#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct Memory_1;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class MemoryMarshal;
}
// Type: System.Runtime.InteropServices::MemoryMarshal
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3301))
// CS Name: System.Runtime.InteropServices.MemoryMarshal
class CORDL_TYPE MemoryMarshal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MemoryMarshal() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryMarshal", modifiers: " const&", def_value: None }]
constexpr MemoryMarshal(MemoryMarshal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryMarshal", modifiers: "&&", def_value: None }]
constexpr MemoryMarshal(MemoryMarshal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryMarshal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemoryMarshal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryMarshal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryMarshal& operator=(MemoryMarshal&& o) noexcept = default;
  constexpr MemoryMarshal& operator=(MemoryMarshal const& o) noexcept = default;
                


// Methods

/// @brief Method AsBytes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Span_1<uint8_t> AsBytes(System::Span_1<T> span) ;

/// @brief Method AsBytes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::ReadOnlySpan_1<uint8_t> AsBytes(System::ReadOnlySpan_1<T> span) ;

/// @brief Method AsMemory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Memory_1<T> AsMemory(System::ReadOnlyMemory_1<T> memory) ;

/// @brief Method GetReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ByRef<T> GetReference(System::Span_1<T> span) ;

/// @brief Method GetReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ByRef<T> GetReference(System::ReadOnlySpan_1<T> span) ;

/// @brief Method GetNonNullPinnableReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ByRef<T> GetNonNullPinnableReference(System::Span_1<T> span) ;

/// @brief Method GetNonNullPinnableReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ByRef<T> GetNonNullPinnableReference(System::ReadOnlySpan_1<T> span) ;

/// @brief Method CreateReadOnlySpan addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::ReadOnlySpan_1<T> CreateReadOnlySpan(ByRef<T> reference, int32_t length) ;

/// @brief Method TryGetArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool TryGetArray(System::ReadOnlyMemory_1<T> memory, ByRef<System::ArraySegment_1<T>> segment) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::MemoryMarshal);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::MemoryMarshal, "System.Runtime.InteropServices", "MemoryMarshal");
