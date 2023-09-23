#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SurrogateKey;
}
// Type: System.Runtime.Serialization::SurrogateKey
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3234))
// CS Name: System.Runtime.Serialization.SurrogateKey
class CORDL_TYPE SurrogateKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SurrogateKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "SurrogateKey", modifiers: " const&", def_value: None }]
constexpr SurrogateKey(SurrogateKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SurrogateKey", modifiers: "&&", def_value: None }]
constexpr SurrogateKey(SurrogateKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SurrogateKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SurrogateKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SurrogateKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SurrogateKey& operator=(SurrogateKey&& o) noexcept = default;
  constexpr SurrogateKey& operator=(SurrogateKey const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_m_type, put=__set_m_type))  m_type;

constexpr void __set_m_type(System::Type value) ;

constexpr System::Type __get_m_type() const;

 System::Runtime::Serialization::StreamingContext __declspec(property(get=__get_m_context, put=__set_m_context))  m_context;

constexpr void __set_m_context(System::Runtime::Serialization::StreamingContext value) ;

constexpr System::Runtime::Serialization::StreamingContext __get_m_context() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit SurrogateKey(System::Type type, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2353958 size 0x3c virtual false final false
 void _ctor(System::Type type, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetHashCode addr 0x2353b90 size 0x20 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::SurrogateKey);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SurrogateKey, "System.Runtime.Serialization", "SurrogateKey");
