#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace System::Runtime::Serialization {
class SurrogateHashtable;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SurrogateSelector;
}
// Type: System.Runtime.Serialization::SurrogateSelector
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3233))
// CS Name: System.Runtime.Serialization.SurrogateSelector
class CORDL_TYPE SurrogateSelector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISurrogateSelector
constexpr operator  ::System::Runtime::Serialization::ISurrogateSelector() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SurrogateSelector() = default;

// Ctor Parameters [CppParam { name: "", ty: "SurrogateSelector", modifiers: " const&", def_value: None }]
constexpr SurrogateSelector(SurrogateSelector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SurrogateSelector", modifiers: "&&", def_value: None }]
constexpr SurrogateSelector(SurrogateSelector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SurrogateSelector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SurrogateSelector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SurrogateSelector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SurrogateSelector& operator=(SurrogateSelector&& o) noexcept = default;
  constexpr SurrogateSelector& operator=(SurrogateSelector const& o) noexcept = default;
                


// Fields

 ::System::Runtime::Serialization::SurrogateHashtable __declspec(property(get=__get_m_surrogates, put=__set_m_surrogates))  m_surrogates;

constexpr void __set_m_surrogates(::System::Runtime::Serialization::SurrogateHashtable value) ;

constexpr ::System::Runtime::Serialization::SurrogateHashtable __get_m_surrogates() const;

 ::System::Runtime::Serialization::ISurrogateSelector __declspec(property(get=__get_m_nextSelector, put=__set_m_nextSelector))  m_nextSelector;

constexpr void __set_m_nextSelector(::System::Runtime::Serialization::ISurrogateSelector value) ;

constexpr ::System::Runtime::Serialization::ISurrogateSelector __get_m_nextSelector() const;


// Methods

// Ctor Parameters []
explicit SurrogateSelector() ;

/// @brief Method .ctor addr 0x2353794 size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method AddSurrogate addr 0x235380c size 0x14c virtual true final false
 void AddSurrogate(::System::Type type, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ISerializationSurrogate surrogate) ;

/// @brief Method GetSurrogate addr 0x2353994 size 0x1fc virtual true final false
 ::System::Runtime::Serialization::ISerializationSurrogate GetSurrogate(::System::Type type, ::System::Runtime::Serialization::StreamingContext context, ByRef<::System::Runtime::Serialization::ISurrogateSelector> selector) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::SurrogateSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SurrogateSelector, "System.Runtime.Serialization", "SurrogateSelector");
