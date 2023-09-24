#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Remoting::Messaging {
class HeaderHandler;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::Remoting::Messaging {
class Header;
}
namespace System::Runtime::Serialization::Formatters {
struct TypeFilterLevel;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class TypeInformation;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class IFormatter;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterTypeStyle;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryFormatter;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryFormatter
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3274))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
class CORDL_TYPE BinaryFormatter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::IFormatter
constexpr operator  System::Runtime::Serialization::IFormatter() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BinaryFormatter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryFormatter", modifiers: " const&", def_value: None }]
constexpr BinaryFormatter(BinaryFormatter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryFormatter", modifiers: "&&", def_value: None }]
constexpr BinaryFormatter(BinaryFormatter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryFormatter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryFormatter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryFormatter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryFormatter& operator=(BinaryFormatter&& o) noexcept = default;
  constexpr BinaryFormatter& operator=(BinaryFormatter const& o) noexcept = default;
                


// Fields

 System::Runtime::Serialization::ISurrogateSelector __declspec(property(get=__get_m_surrogates, put=__set_m_surrogates))  m_surrogates;

constexpr void __set_m_surrogates(System::Runtime::Serialization::ISurrogateSelector value) ;

constexpr System::Runtime::Serialization::ISurrogateSelector __get_m_surrogates() const;

 System::Runtime::Serialization::StreamingContext __declspec(property(get=__get_m_context, put=__set_m_context))  m_context;

constexpr void __set_m_context(System::Runtime::Serialization::StreamingContext value) ;

constexpr System::Runtime::Serialization::StreamingContext __get_m_context() const;

 System::Runtime::Serialization::SerializationBinder __declspec(property(get=__get_m_binder, put=__set_m_binder))  m_binder;

constexpr void __set_m_binder(System::Runtime::Serialization::SerializationBinder value) ;

constexpr System::Runtime::Serialization::SerializationBinder __get_m_binder() const;

 System::Runtime::Serialization::Formatters::FormatterTypeStyle __declspec(property(get=__get_m_typeFormat, put=__set_m_typeFormat))  m_typeFormat;

constexpr void __set_m_typeFormat(System::Runtime::Serialization::Formatters::FormatterTypeStyle value) ;

constexpr System::Runtime::Serialization::Formatters::FormatterTypeStyle __get_m_typeFormat() const;

 System::Runtime::Serialization::Formatters::FormatterAssemblyStyle __declspec(property(get=__get_m_assemblyFormat, put=__set_m_assemblyFormat))  m_assemblyFormat;

constexpr void __set_m_assemblyFormat(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) ;

constexpr System::Runtime::Serialization::Formatters::FormatterAssemblyStyle __get_m_assemblyFormat() const;

 System::Runtime::Serialization::Formatters::TypeFilterLevel __declspec(property(get=__get_m_securityLevel, put=__set_m_securityLevel))  m_securityLevel;

constexpr void __set_m_securityLevel(System::Runtime::Serialization::Formatters::TypeFilterLevel value) ;

constexpr System::Runtime::Serialization::Formatters::TypeFilterLevel __get_m_securityLevel() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_crossAppDomainArray, put=__set_m_crossAppDomainArray))  m_crossAppDomainArray;

constexpr void __set_m_crossAppDomainArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_crossAppDomainArray() const;

static System::Collections::Generic::Dictionary_2<System::Type,System::Runtime::Serialization::Formatters::Binary::TypeInformation> __declspec(property(get=__get_typeNameCache, put=__set_typeNameCache))  typeNameCache;

static void __set_typeNameCache(System::Collections::Generic::Dictionary_2<System::Type,System::Runtime::Serialization::Formatters::Binary::TypeInformation> value) ;

static System::Collections::Generic::Dictionary_2<System::Type,System::Runtime::Serialization::Formatters::Binary::TypeInformation> __get_typeNameCache() ;


// Properties

 System::Runtime::Serialization::Formatters::FormatterAssemblyStyle __declspec(property(put=set_AssemblyFormat))  AssemblyFormat;

 System::Runtime::Serialization::ISurrogateSelector __declspec(property(put=set_SurrogateSelector))  SurrogateSelector;

 System::Runtime::Serialization::SerializationBinder __declspec(property(put=set_Binder))  Binder;


// Methods

/// @brief Method set_AssemblyFormat addr 0x2359b94 size 0x8 virtual false final false
 void set_AssemblyFormat(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) ;

/// @brief Method set_SurrogateSelector addr 0x2359b9c size 0x8 virtual true final true
 void set_SurrogateSelector(System::Runtime::Serialization::ISurrogateSelector value) ;

/// @brief Method set_Binder addr 0x2359ba4 size 0x8 virtual true final true
 void set_Binder(System::Runtime::Serialization::SerializationBinder value) ;

static System::Runtime::Serialization::Formatters::Binary::BinaryFormatter New_ctor() ;

/// @brief Method .ctor addr 0x2359bac size 0x34 virtual false final false
 void _ctor() ;

static System::Runtime::Serialization::Formatters::Binary::BinaryFormatter New_ctor(System::Runtime::Serialization::ISurrogateSelector selector, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2359be0 size 0x4c virtual false final false
 void _ctor(System::Runtime::Serialization::ISurrogateSelector selector, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Deserialize addr 0x2359c2c size 0xc virtual true final true
 ::bs_hook::Il2CppWrapperType Deserialize(System::IO::Stream serializationStream) ;

/// @brief Method Deserialize addr 0x2359c40 size 0x24c virtual false final false
 ::bs_hook::Il2CppWrapperType Deserialize(System::IO::Stream serializationStream, System::Runtime::Remoting::Messaging::HeaderHandler handler, bool fCheck) ;

/// @brief Method Deserialize addr 0x2359c38 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType Deserialize(System::IO::Stream serializationStream, System::Runtime::Remoting::Messaging::HeaderHandler handler) ;

/// @brief Method Serialize addr 0x2359e8c size 0xc virtual true final true
 void Serialize(System::IO::Stream serializationStream, ::bs_hook::Il2CppWrapperType graph) ;

/// @brief Method Serialize addr 0x2359e98 size 0x8 virtual true final true
 void Serialize(System::IO::Stream serializationStream, ::bs_hook::Il2CppWrapperType graph, ::ArrayW<System::Runtime::Remoting::Messaging::Header> headers) ;

/// @brief Method Serialize addr 0x2359ea0 size 0x1f8 virtual false final false
 void Serialize(System::IO::Stream serializationStream, ::bs_hook::Il2CppWrapperType graph, ::ArrayW<System::Runtime::Remoting::Messaging::Header> headers, bool fCheck) ;

/// @brief Method GetTypeInformation addr 0x235a150 size 0x25c virtual false final false
static System::Runtime::Serialization::Formatters::Binary::TypeInformation GetTypeInformation(System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter");
