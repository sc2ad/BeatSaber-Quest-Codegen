#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Resources {
class ResourceReader;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Resources {
struct ResourceLocator;
}
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
// Forward declare root types
namespace System::Resources {
class RuntimeResourceSet;
}
// Type: System.Resources::RuntimeResourceSet
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3434))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3421))
// CS Name: System.Resources.RuntimeResourceSet
class CORDL_TYPE RuntimeResourceSet : public ::System::Resources::ResourceSet {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RuntimeResourceSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeResourceSet", modifiers: " const&", def_value: None }]
constexpr RuntimeResourceSet(RuntimeResourceSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeResourceSet", modifiers: "&&", def_value: None }]
constexpr RuntimeResourceSet(RuntimeResourceSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeResourceSet(void* ptr) noexcept : ::System::Resources::ResourceSet(ptr) {
}


  constexpr RuntimeResourceSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeResourceSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeResourceSet& operator=(RuntimeResourceSet&& o) noexcept = default;
  constexpr RuntimeResourceSet& operator=(RuntimeResourceSet const& o) noexcept = default;
                


// Fields

/// @brief Field Version offset 0
static constexpr int32_t  Version{2};

 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator> __declspec(property(get=__get__resCache, put=__set__resCache))  _resCache;

constexpr void __set__resCache(::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator> __get__resCache() const;

 ::System::Resources::ResourceReader __declspec(property(get=__get__defaultReader, put=__set__defaultReader))  _defaultReader;

constexpr void __set__defaultReader(::System::Resources::ResourceReader value) ;

constexpr ::System::Resources::ResourceReader __get__defaultReader() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator> __declspec(property(get=__get__caseInsensitiveTable, put=__set__caseInsensitiveTable))  _caseInsensitiveTable;

constexpr void __set__caseInsensitiveTable(::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator> __get__caseInsensitiveTable() const;

 bool __declspec(property(get=__get__haveReadFromReader, put=__set__haveReadFromReader))  _haveReadFromReader;

constexpr void __set__haveReadFromReader(bool value) ;

constexpr bool __get__haveReadFromReader() const;


// Methods

// Ctor Parameters [CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }]
explicit RuntimeResourceSet(::StringW fileName) ;

/// @brief Method .ctor addr 0x2370d94 size 0x140 virtual false final false
 void _ctor(::StringW fileName) ;

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit RuntimeResourceSet(::System::IO::Stream stream) ;

/// @brief Method .ctor addr 0x2370ed4 size 0x100 virtual false final false
 void _ctor(::System::IO::Stream stream) ;

/// @brief Method Dispose addr 0x2370fd4 size 0x124 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method GetEnumerator addr 0x23710f8 size 0x4 virtual true final false
 ::System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x23711fc size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumeratorHelper addr 0x23710fc size 0x100 virtual false final false
 ::System::Collections::IDictionaryEnumerator GetEnumeratorHelper() ;

/// @brief Method GetString addr 0x2371200 size 0x70 virtual true final false
 ::StringW GetString(::StringW key) ;

/// @brief Method GetString addr 0x2371b84 size 0x7c virtual true final false
 ::StringW GetString(::StringW key, bool ignoreCase) ;

/// @brief Method GetObject addr 0x2371c00 size 0xc virtual true final false
 ::bs_hook::Il2CppWrapperType GetObject(::StringW key) ;

/// @brief Method GetObject addr 0x2371c0c size 0xc virtual true final false
 ::bs_hook::Il2CppWrapperType GetObject(::StringW key, bool ignoreCase) ;

/// @brief Method GetObject addr 0x2371270 size 0x914 virtual false final false
 ::bs_hook::Il2CppWrapperType GetObject(::StringW key, bool ignoreCase, bool isString) ;

/// @brief Method ResolveResourceLocator addr 0x2371c18 size 0x1188 virtual false final false
 ::bs_hook::Il2CppWrapperType ResolveResourceLocator(::System::Resources::ResourceLocator resLocation, ::StringW key, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator> copyOfCache, bool keyInWrongCase) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
} // end anonymous namespace
NEED_NO_BOX(::System::Resources::RuntimeResourceSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::RuntimeResourceSet, "System.Resources", "RuntimeResourceSet");
