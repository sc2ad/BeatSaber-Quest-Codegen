#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::Cryptography {
class KeySizes;
}
// Type: System.Security.Cryptography::KeySizes
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2919))
// CS Name: System.Security.Cryptography.KeySizes
class CORDL_TYPE KeySizes : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KeySizes() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeySizes", modifiers: " const&", def_value: None }]
constexpr KeySizes(KeySizes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeySizes", modifiers: "&&", def_value: None }]
constexpr KeySizes(KeySizes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeySizes(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeySizes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeySizes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeySizes& operator=(KeySizes&& o) noexcept = default;
  constexpr KeySizes& operator=(KeySizes const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_minSize, put=__set_m_minSize))  m_minSize;

constexpr void __set_m_minSize(int32_t value) ;

constexpr int32_t __get_m_minSize() const;

 int32_t __declspec(property(get=__get_m_maxSize, put=__set_m_maxSize))  m_maxSize;

constexpr void __set_m_maxSize(int32_t value) ;

constexpr int32_t __get_m_maxSize() const;

 int32_t __declspec(property(get=__get_m_skipSize, put=__set_m_skipSize))  m_skipSize;

constexpr void __set_m_skipSize(int32_t value) ;

constexpr int32_t __get_m_skipSize() const;


// Properties

 int32_t __declspec(property(get=get_MinSize))  MinSize;

 int32_t __declspec(property(get=get_MaxSize))  MaxSize;

 int32_t __declspec(property(get=get_SkipSize))  SkipSize;


// Methods

/// @brief Method get_MinSize addr 0x22efdc4 size 0x8 virtual false final false
 int32_t get_MinSize() ;

/// @brief Method get_MaxSize addr 0x22efdcc size 0x8 virtual false final false
 int32_t get_MaxSize() ;

/// @brief Method get_SkipSize addr 0x22efdd4 size 0x8 virtual false final false
 int32_t get_SkipSize() ;

// Ctor Parameters [CppParam { name: "minSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "skipSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit KeySizes(int32_t minSize, int32_t maxSize, int32_t skipSize) ;

/// @brief Method .ctor addr 0x22efb70 size 0x3c virtual false final false
 void _ctor(int32_t minSize, int32_t maxSize, int32_t skipSize) ;

/// @brief Method IsLegal addr 0x22efddc size 0x4c virtual false final false
 bool IsLegal(int32_t keySize) ;

/// @brief Method IsLegalKeySize addr 0x22efe28 size 0x80 virtual false final false
static bool IsLegalKeySize(::ArrayW<::System::Security::Cryptography::KeySizes> legalKeys, int32_t size) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::KeySizes);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::KeySizes, "System.Security.Cryptography", "KeySizes");
