#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading {
class ReaderWriterCount;
}
// Type: System.Threading::ReaderWriterCount
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14599))
// CS Name: System.Threading.ReaderWriterCount
class CORDL_TYPE ReaderWriterCount : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ReaderWriterCount() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReaderWriterCount", modifiers: " const&", def_value: None }]
constexpr ReaderWriterCount(ReaderWriterCount const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReaderWriterCount", modifiers: "&&", def_value: None }]
constexpr ReaderWriterCount(ReaderWriterCount&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReaderWriterCount(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReaderWriterCount& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReaderWriterCount& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReaderWriterCount& operator=(ReaderWriterCount&& o) noexcept = default;
  constexpr ReaderWriterCount& operator=(ReaderWriterCount const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_lockID, put=__set_lockID))  lockID;

constexpr void __set_lockID(int64_t value) ;

constexpr int64_t __get_lockID() const;

 int32_t __declspec(property(get=__get_readercount, put=__set_readercount))  readercount;

constexpr void __set_readercount(int32_t value) ;

constexpr int32_t __get_readercount() const;

 int32_t __declspec(property(get=__get_writercount, put=__set_writercount))  writercount;

constexpr void __set_writercount(int32_t value) ;

constexpr int32_t __get_writercount() const;

 int32_t __declspec(property(get=__get_upgradecount, put=__set_upgradecount))  upgradecount;

constexpr void __set_upgradecount(int32_t value) ;

constexpr int32_t __get_upgradecount() const;

 ::System::Threading::ReaderWriterCount __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(::System::Threading::ReaderWriterCount value) ;

constexpr ::System::Threading::ReaderWriterCount __get_next() const;


// Methods

// Ctor Parameters []
explicit ReaderWriterCount() ;

/// @brief Method .ctor addr 0x2682648 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::ReaderWriterCount);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ReaderWriterCount, "System.Threading", "ReaderWriterCount");
