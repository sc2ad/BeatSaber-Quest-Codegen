#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Globalization {
class CultureInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections {
class IComparer;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Globalization {
class CompareInfo;
}
// Forward declare root types
namespace System::Collections {
class Comparer;
}
// Type: System.Collections::Comparer
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3737))
// CS Name: System.Collections.Comparer
class CORDL_TYPE Comparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IComparer
constexpr operator  System::Collections::IComparer() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Comparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Comparer", modifiers: " const&", def_value: None }]
constexpr Comparer(Comparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Comparer", modifiers: "&&", def_value: None }]
constexpr Comparer(Comparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Comparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Comparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Comparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Comparer& operator=(Comparer&& o) noexcept = default;
  constexpr Comparer& operator=(Comparer const& o) noexcept = default;
                


// Fields

 System::Globalization::CompareInfo __declspec(property(get=__get__compareInfo, put=__set__compareInfo))  _compareInfo;

constexpr void __set__compareInfo(System::Globalization::CompareInfo value) ;

constexpr System::Globalization::CompareInfo __get__compareInfo() const;

static System::Collections::Comparer __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(System::Collections::Comparer value) ;

static System::Collections::Comparer __get_Default() ;

static System::Collections::Comparer __declspec(property(get=__get_DefaultInvariant, put=__set_DefaultInvariant))  DefaultInvariant;

static void __set_DefaultInvariant(System::Collections::Comparer value) ;

static System::Collections::Comparer __get_DefaultInvariant() ;


// Methods

// Ctor Parameters [CppParam { name: "culture", ty: "System::Globalization::CultureInfo", modifiers: "", def_value: None }]
explicit Comparer(System::Globalization::CultureInfo culture) ;

/// @brief Method .ctor addr 0x240e26c size 0x88 virtual false final false
 void _ctor(System::Globalization::CultureInfo culture) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit Comparer(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x240e2f4 size 0x174 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x240e468 size 0xa4 virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Compare addr 0x240e50c size 0x210 virtual true final true
 int32_t Compare(::bs_hook::Il2CppWrapperType a, ::bs_hook::Il2CppWrapperType b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::Comparer);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Comparer, "System.Collections", "Comparer");
