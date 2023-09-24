#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
// Type: Org.BouncyCastle.Asn1::Asn1EncodableVector
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(449))
// CS Name: Org.BouncyCastle.Asn1.Asn1EncodableVector
class CORDL_TYPE Asn1EncodableVector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Asn1EncodableVector() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1EncodableVector", modifiers: " const&", def_value: None }]
constexpr Asn1EncodableVector(Asn1EncodableVector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1EncodableVector", modifiers: "&&", def_value: None }]
constexpr Asn1EncodableVector(Asn1EncodableVector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1EncodableVector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Asn1EncodableVector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1EncodableVector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1EncodableVector& operator=(Asn1EncodableVector&& o) noexcept = default;
  constexpr Asn1EncodableVector& operator=(Asn1EncodableVector const& o) noexcept = default;
                


// Fields

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{10};

static ::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> __declspec(property(get=__get_EmptyElements, put=__set_EmptyElements))  EmptyElements;

static void __set_EmptyElements(::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> value) ;

static ::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> __get_EmptyElements() ;

 ::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> __get_elements() const;

 int32_t __declspec(property(get=__get_elementCount, put=__set_elementCount))  elementCount;

constexpr void __set_elementCount(int32_t value) ;

constexpr int32_t __get_elementCount() const;

 bool __declspec(property(get=__get_copyOnWrite, put=__set_copyOnWrite))  copyOnWrite;

constexpr void __set_copyOnWrite(bool value) ;

constexpr bool __get_copyOnWrite() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method FromEnumerable addr 0x11280f0 size 0x35c virtual false final false
static Org::BouncyCastle::Asn1::Asn1EncodableVector FromEnumerable(System::Collections::IEnumerable e) ;

static Org::BouncyCastle::Asn1::Asn1EncodableVector New_ctor() ;

/// @brief Method .ctor addr 0x1125b28 size 0x8 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Asn1::Asn1EncodableVector New_ctor(int32_t initialCapacity) ;

/// @brief Method .ctor addr 0x112844c size 0x10c virtual false final false
 void _ctor(int32_t initialCapacity) ;

static Org::BouncyCastle::Asn1::Asn1EncodableVector New_ctor(::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> v) ;

/// @brief Method .ctor addr 0x111fb9c size 0x2c virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> v) ;

/// @brief Method Add addr 0x111fca0 size 0xf4 virtual false final false
 void Add(Org::BouncyCastle::Asn1::Asn1Encodable element) ;

/// @brief Method Add addr 0x112720c size 0x6c virtual false final false
 void Add(::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> objs) ;

/// @brief Method AddOptional addr 0x1128624 size 0x6c virtual false final false
 void AddOptional(::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> objs) ;

/// @brief Method AddOptionalTagged addr 0x111fbc8 size 0x94 virtual false final false
 void AddOptionalTagged(bool isExplicit, int32_t tagNo, Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method AddAll addr 0x1128698 size 0x16c virtual false final false
 void AddAll(Org::BouncyCastle::Asn1::Asn1EncodableVector other) ;

/// @brief Method get_Item addr 0x1128804 size 0xf0 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Item(int32_t index) ;

/// @brief Method get_Count addr 0x11288f4 size 0x8 virtual false final false
 int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x11288fc size 0x1c virtual true final true
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method CopyElements addr 0x1128918 size 0xac virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> CopyElements() ;

/// @brief Method TakeElements addr 0x11289c4 size 0xd0 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> TakeElements() ;

/// @brief Method Reallocate addr 0x1128558 size 0xcc virtual false final false
 void Reallocate(int32_t minCapacity) ;

/// @brief Method CloneElements addr 0x1128a94 size 0xb4 virtual false final false
static ::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> CloneElements(::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> elements) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::Asn1EncodableVector);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1EncodableVector, "Org.BouncyCastle.Asn1", "Asn1EncodableVector");
