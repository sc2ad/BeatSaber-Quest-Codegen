#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System::Buffers {
struct MemoryHandle;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace System::Buffers {
template<typename T>
class MemoryManager_1;
}
namespace System::Buffers {
template<::cordl_internals::il2cpp_reference_type T>
class MemoryManager_1<T>;
}
namespace System::Buffers {
template<>
class MemoryManager_1<uint8_t>;
}
// Type: System.Buffers::MemoryManager`1
// Type: System.Buffers::MemoryManager`1
namespace System::Buffers {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 2 })
// CS Name: System.Buffers.MemoryManager`1
class CORDL_TYPE MemoryManager_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MemoryManager_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryManager_1", modifiers: " const&", def_value: None }]
constexpr MemoryManager_1(MemoryManager_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryManager_1", modifiers: "&&", def_value: None }]
constexpr MemoryManager_1(MemoryManager_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryManager_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemoryManager_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryManager_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryManager_1& operator=(MemoryManager_1&& o) noexcept = default;
  constexpr MemoryManager_1& operator=(MemoryManager_1 const& o) noexcept = default;
                


// Methods

/// @brief Method GetSpan addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Span_1<T> GetSpan() ;

/// @brief Method Pin addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Buffers::MemoryHandle Pin(int32_t elementIndex) ;

/// @brief Method TryGetArray addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryGetArray(ByRef<System::ArraySegment_1<T>> segment) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::MemoryManager`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 717 })
// CS Name: System.Buffers.MemoryManager`1
class CORDL_TYPE MemoryManager_1<uint8_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MemoryManager_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryManager_1", modifiers: " const&", def_value: None }]
constexpr MemoryManager_1(MemoryManager_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryManager_1", modifiers: "&&", def_value: None }]
constexpr MemoryManager_1(MemoryManager_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryManager_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemoryManager_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryManager_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryManager_1& operator=(MemoryManager_1&& o) noexcept = default;
  constexpr MemoryManager_1& operator=(MemoryManager_1 const& o) noexcept = default;
                


// Methods

/// @brief Method GetSpan addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Span_1<uint8_t> GetSpan() ;

/// @brief Method Pin addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Buffers::MemoryHandle Pin(int32_t elementIndex) ;

/// @brief Method TryGetArray addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryGetArray(ByRef<System::ArraySegment_1<uint8_t>> segment) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Buffers::MemoryManager_1, "System.Buffers", "MemoryManager`1");
