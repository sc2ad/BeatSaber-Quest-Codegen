#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
// Forward declare root types
namespace System::Xml {
class SecureStringHasher;
}
namespace System::Xml {
class System__Xml__SecureStringHasher__HashCodeOfStringDelegate;
}
// Type: ::HashCodeOfStringDelegate
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11383))
// CS Name: System.Xml.SecureStringHasher::HashCodeOfStringDelegate
class CORDL_TYPE System__Xml__SecureStringHasher__HashCodeOfStringDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__Xml__SecureStringHasher__HashCodeOfStringDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__SecureStringHasher__HashCodeOfStringDelegate", modifiers: " const&", def_value: None }]
constexpr System__Xml__SecureStringHasher__HashCodeOfStringDelegate(System__Xml__SecureStringHasher__HashCodeOfStringDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__SecureStringHasher__HashCodeOfStringDelegate", modifiers: "&&", def_value: None }]
constexpr System__Xml__SecureStringHasher__HashCodeOfStringDelegate(System__Xml__SecureStringHasher__HashCodeOfStringDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__SecureStringHasher__HashCodeOfStringDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__Xml__SecureStringHasher__HashCodeOfStringDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__SecureStringHasher__HashCodeOfStringDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__SecureStringHasher__HashCodeOfStringDelegate& operator=(System__Xml__SecureStringHasher__HashCodeOfStringDelegate&& o) noexcept = default;
  constexpr System__Xml__SecureStringHasher__HashCodeOfStringDelegate& operator=(System__Xml__SecureStringHasher__HashCodeOfStringDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit System__Xml__SecureStringHasher__HashCodeOfStringDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26c1fb8 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26c2090 size 0x14 virtual true final false
 int32_t Invoke(::StringW s, int32_t sLen, int64_t additionalEntropy) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: System.Xml::SecureStringHasher
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11384))
// CS Name: System.Xml.SecureStringHasher
class CORDL_TYPE SecureStringHasher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using HashCodeOfStringDelegate = System::Xml::System__Xml__SecureStringHasher__HashCodeOfStringDelegate;

/// @brief Convert operator to System::Collections::Generic::IEqualityComparer_1<::StringW>
constexpr operator  System::Collections::Generic::IEqualityComparer_1<::StringW>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SecureStringHasher() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecureStringHasher", modifiers: " const&", def_value: None }]
constexpr SecureStringHasher(SecureStringHasher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecureStringHasher", modifiers: "&&", def_value: None }]
constexpr SecureStringHasher(SecureStringHasher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecureStringHasher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecureStringHasher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecureStringHasher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecureStringHasher& operator=(SecureStringHasher&& o) noexcept = default;
  constexpr SecureStringHasher& operator=(SecureStringHasher const& o) noexcept = default;
                


// Fields

static System::Xml::System__Xml__SecureStringHasher__HashCodeOfStringDelegate __declspec(property(get=__get_hashCodeDelegate, put=__set_hashCodeDelegate))  hashCodeDelegate;

static void __set_hashCodeDelegate(System::Xml::System__Xml__SecureStringHasher__HashCodeOfStringDelegate value) ;

static System::Xml::System__Xml__SecureStringHasher__HashCodeOfStringDelegate __get_hashCodeDelegate() ;

 int32_t __declspec(property(get=__get_hashCodeRandomizer, put=__set_hashCodeRandomizer))  hashCodeRandomizer;

constexpr void __set_hashCodeRandomizer(int32_t value) ;

constexpr int32_t __get_hashCodeRandomizer() const;


// Methods

// Ctor Parameters []
explicit SecureStringHasher() ;

/// @brief Method .ctor addr 0x26c1d1c size 0x24 virtual false final false
 void _ctor() ;

/// @brief Method Equals addr 0x26c1d40 size 0x18 virtual true final true
 bool Equals(::StringW x, ::StringW y) ;

/// @brief Method GetHashCode addr 0x26c1d58 size 0x9c virtual true final true
 int32_t GetHashCode(::StringW key) ;

/// @brief Method GetHashCodeOfString addr 0x26c1f4c size 0x6c virtual false final false
static int32_t GetHashCodeOfString(::StringW key, int32_t sLen, int64_t additionalEntropy) ;

/// @brief Method GetHashCodeDelegate addr 0x26c1df4 size 0x158 virtual false final false
static System::Xml::System__Xml__SecureStringHasher__HashCodeOfStringDelegate GetHashCodeDelegate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::SecureStringHasher);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::SecureStringHasher, "System.Xml", "SecureStringHasher");
NEED_NO_BOX(System::Xml::System__Xml__SecureStringHasher__HashCodeOfStringDelegate);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__SecureStringHasher__HashCodeOfStringDelegate, "System.Xml", "SecureStringHasher/HashCodeOfStringDelegate");
